Comment @

Name	    : console.inc

Description : Declares console input/output routines defined in console.lib

Author	    : K.M.Hussain

Date	    : 23-Mar-1996

Licence	    : Educational

@

includelib console

;---------------------------------------------------------
; Reads a string from console into the specified buffer
; Receives :
;	edx = address of buffer
;	ecx = size of buffer
; Returns :
;	eax = number of characters read
;---------------------------------------------------------
extern	ReadS:proc



;---------------------------------------------------------
; Writes a string in the specified buffer to the console
; Receives :
;	edx = address of buffer
;	ecx = size of buffer
;---------------------------------------------------------
extern	WriteS:proc


;---------------------------------------------------------
; Reads a single character from console without echoing it
; Returns :
;	al = ascii code of the character
;---------------------------------------------------------
extern	ReadC:proc



;---------------------------------------------------------
; Writes a single character to the console
; Receives :
;	al = ascii code of the character
;---------------------------------------------------------
extern	WriteC:proc



;---------------------------------------------------------
; Reads an integer from the console
; Returns :
;	eax = integer
;	Zero flag : clear(success) / set(failure)
;---------------------------------------------------------
extern	ReadI:proc



;---------------------------------------------------------
; Writes an integer to the console
; Receives :
;	eax = integer
;---------------------------------------------------------
extern	WriteI:proc


lf	equ	10		;line-feed character

Print	macro	msg
	mov	edx, offset msg
	mov	ecx, sizeof msg
	call	WriteS
endm
