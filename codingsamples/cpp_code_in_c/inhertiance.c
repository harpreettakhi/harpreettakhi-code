#include <stdio.h>

struct BaseClass
{

	int basemember;
};

void BaseClass(struct BaseClass *this)
{
	printf("Inside BaseClass constructor\n");
	this->basemember = 0;
}
	
int BaseMember(struct BaseClass *this, int val)
{
	printf("Inside BaseMember function\n");
	return this->basemember + val;
}


struct  DrivedClass
{
	struct BaseClass baseObj;
        int drivedmember;
};

void DrivedClass(struct DrivedClass *this)
{
	BaseClass((struct BaseClass*)this);
	printf("Inside DrivedClass constructor\n");
        this->drivedmember = 0;
}

int DrivedMember(struct DrivedClass *this, int val)
{
	printf("Inside DrivedClass function\n");
        return this->drivedmember + val;
}


int main(int argc, char *argv[])
{
	printf("------------BaseClass-----------\n");
	struct BaseClass obj1;
	BaseClass(&obj1);
	int result = BaseMember(&obj1, 5);
	printf("%d\n",result);
	printf("----------DrivedClass-----------\n");
	struct DrivedClass obj2;
	DrivedClass(&obj2);
	int result1 = DrivedMember(&obj2, 10);
	printf("%d\n", result1);
	return 0;
}

