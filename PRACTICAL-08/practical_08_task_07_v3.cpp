#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a=10;
	int b=20;
	cout<<"\n NUMBER BEFORE IN THE MAIN PROGRAM ="<<a<<endl<<b<<endl;
	swap(&a,&b);
	cout<<"\n NUMBERS AFTER IN THE MAIN PROGRAM ="<<a<<endl<<b<<endl;
	return 0;
}

void swap(int *x,int *y)
{
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"\n NUMBER CHANGED IN THE FUNCTION BLOCK ="<<*x<<endl<<*y<<endl;
}
