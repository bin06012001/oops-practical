#include<iostream>
using namespace std;

class College 
{
	int s;
	string sname;
	
	public:
		struct Student{
			string cname;
			char sec;
			int rn;
		}s1;
		College(int n,string s)
		{
			s=n;
			sname=s;
		}
		
		void print()
		{
			cout<<"\n DETAILS OF COLLEGE ";
			cout<<"\n NAME OF THE COLLEGE ="<<sname;
			cout<<"\n NUMBER OF STUDENTS ="<<s;
			cout<<"\n DETAIL OF THE STUDENT ";
			cout<<"\n NAME OF THE STUDENT ="<<s1.cname;
			cout<<"\n SECTION OF THE STUDENT ="<<s1.sec;
			cout<<"\n ROLL NO. OF THE STUDENT ="<<s1.rn;
		}
};

int main()
{
	College c1(10000,"GEHU");
	c1.s1.cname="BINAY";
	c1.s1.sec='A';
	c1.s1.rn=10;
	c1.print();
}
