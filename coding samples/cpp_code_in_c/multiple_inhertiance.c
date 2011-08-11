#include <stdio.h>
#include <stddef.h>

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
struct BaseClass2
{

	int basemember2;
};

void BaseClass2(struct BaseClass2 *this)
{
	printf("Inside BaseClass2 constructor\n");
	this->basemember2 = 0;
}
	
int BaseMember2(struct BaseClass2 *this, int val)
{
	printf("Inside BaseMember2 function\n");
	return this->basemember2 + val;
}


struct  DrivedClass
{
	struct BaseClass baseObj;
	struct BaseClass2 baseObj2;
        int drivedmember;
};

void DrivedClass(struct DrivedClass *this)
{
	BaseClass((struct BaseClass*)this);
	void *ptr = (void*)this + offsetof(struct DrivedClass, baseObj2);
	BaseClass2((struct BaseClass2*)ptr);
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

