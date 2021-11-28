#include<iostream>
#include<string.h>
using namespace std;


class Student 
{
	int x,ph;
	string s;
	public:
	Student(int r, long int p, string add)
	{
		x=r;
		ph=p;
		s=add;
		
	}
	
	void print()
	{
		cout<<"\n ROLL. NO. OF THE STUDENT ="<<x;
		cout<<"\n PHONE NUMBER OF THE STUDENT ="<<ph;
		cout<<"\n ADDRESS OF THE STUDENT = "<<s;
		
	}
};
int main()

{
	string s1="ALMORA";
	string s2="DEHRADUN";
	Student sam(10,9897678567,s1);
	Student john(20,8976785678,s2);
	sam.print();
	john.print();
	
}
