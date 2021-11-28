#include<iostream>
using namespace std;
class Student
{
	string name;
	int age;
	int m;
	public:
		
			Student(string s,int a,int mm)
			{
				name=s;
				age=a;
				m=mm;
			}
			
			friend void Add(Student ma);
		
};

int sum=0;
int c;
void Add(Student ma)
{
	c++;
	sum=sum+ma.m;
};
int main()
{
	Student s1("BINAY",18,98);
	Student s2("ABHISHEK",34,76);
	Student s3("ABHAY",36,68);
	
	Add(s1);
	Add(s2);
	Add(s3);
	cout<<"\n TOTAL SUM OF MARKS OF "<<c<<"STUDENTS IS "<<sum;
}
