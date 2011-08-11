#include <iostream>

using namespace std;

class A
{
	public:
		A(int val) : j(val), i(val)
		{
			//i = j;
		//	j = val;
		}
		
		A(A& obj)
		{
			i = obj.i;
			j = obj.j;
			cout << "inside the copy constructor" << endl;
		}

		int getI()
		{
			return i;
		}
		int getJ()
		{
			return j;
		}
	private:
		int i;
		int j;
};

int main()
{
	A obj(10);
	cout << obj.getI() << " " << obj.getJ() << endl; 
	
	A temp = obj;
	cout << temp.getI() << " " << temp.getJ() << endl; 
	return 0;
}
