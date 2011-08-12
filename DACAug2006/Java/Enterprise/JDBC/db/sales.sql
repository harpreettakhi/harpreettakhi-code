CREATE TABLE CUSTOMERS(
	CUST_ID VARCHAR(8) PRIMARY KEY,
 	PWD VARCHAR(8) CHECK(LEN(PWD) >= 4), 
	EMAIL VARCHAR(24) NOT NULL,
	CREDIT NUMERIC(8,2) CHECK(CREDIT >= 0))

CREATE TABLE PRODUCTS(
	PNO INT  PRIMARY KEY, 
	PRICE NUMERIC(8,2) NOT NULL,
	STOCK INT CHECK(STOCK >= 0))

CREATE TABLE ORDERS(
	ORD_NO INT PRIMARY KEY, 
	ORD_DATE DATETIME, 
	CUST_ID VARCHAR(8) REFERENCES CUSTOMERS(CUST_ID), 
	PNO INT REFERENCES PRODUCTS(PNO), 
	QTY INT CHECK(QTY > 0))

CREATE TABLE ORD_CTL(
	CUST_ID INT, 
	PNO INT, 
	ORD_NO INT)


INSERT INTO CUSTOMERS VALUES ('CU101', 'PW101', 'JOHN@DOE.COM', 5000)
INSERT INTO CUSTOMERS VALUES ('CU102', 'PW102', 'JILL@SMITH.NET', 6000)
INSERT INTO CUSTOMERS VALUES ('CU103', 'PW103', 'JACK@SMITH.NET', 7000)
INSERT INTO CUSTOMERS VALUES ('CU104', 'PW104', 'JANE@DOE.COM', 8000)

INSERT INTO PRODUCTS VALUES (101, 350, 10)
INSERT INTO PRODUCTS VALUES (102, 975, 20)
INSERT INTO PRODUCTS VALUES (103, 845,30)
INSERT INTO PRODUCTS VALUES (104, 1025, 40)
INSERT INTO PRODUCTS VALUES (105, 700, 50)

INSERT INTO ORDERS VALUES(1001, '2001-01-12', 'CU102', 101, 5)
INSERT INTO ORDERS VALUES(1002, '2001-01-25', 'CU103', 102, 10)
INSERT INTO ORDERS VALUES(1003, '2001-02-08', 'CU102', 102, 12)
INSERT INTO ORDERS VALUES(1004, '2001-03-21', 'CU101', 103, 3)
INSERT INTO ORDERS VALUES(1005, '2001-03-19', 'CU103', 104, 15)
INSERT INTO ORDERS VALUES(1006, '2001-04-11', 'CU104', 105, 12)

INSERT INTO ORD_CTL VALUES(104, 105, 1006)


CREATE VIEW ORD_VIEW AS 
    SELECT ORD_NO, ORD_DATE, CUST_ID, ORDERS.PNO, QTY, PRICE*QTY AS AMT 
    FROM ORDERS, PRODUCTS 
    WHERE ORDERS.PNO = PRODUCTS.PNO

CREATE PROCEDURE PLACE_ORDER(
    @CUSTOMER VARCHAR(8), 
    @PRODUCT INTEGER, 
    @QUANTITY INTEGER,
    @ORDID INTEGER OUTPUT) AS
BEGIN TRAN
UPDATE ORD_CTL SET ORD_NO=ORD_NO+1
SELECT @ORDID = ORD_NO FROM ORD_CTL
INSERT INTO ORDERS VALUES(@ORDID, GETDATE(), @CUSTOMER, @PRODUCT, @QUANTITY)
IF @@ERROR = 0 COMMIT TRAN
ELSE 
BEGIN
 ROLLBACK TRAN
 SET @ORDID = 0
END

CREATE PROCEDURE ADD_PRODUCT(
    @PRICE NUMERIC, 
    @STOCK INTEGER) AS
DECLARE @PNO INTEGER
BEGIN TRAN
UPDATE ORD_CTL SET PNO=PNO+1
SELECT @PNO = PNO FROM ORD_CTL
INSERT INTO PRODUCTS VALUES(@PNO, @PRICE, @STOCK)
IF @@ERROR = 0 COMMIT TRAN
ELSE ROLLBACK TRAN
SELECT @PNO

CREATE PROCEDURE CHECK_CUSTOMER(@CUSTOMER VARCHAR(8), @PASSWORD VARCHAR(8)) 
AS
SELECT COUNT(*) AS RESULT FROM CUSTOMERS WHERE CUST_ID=@CUSTOMER AND PWD=@PASSWORD
