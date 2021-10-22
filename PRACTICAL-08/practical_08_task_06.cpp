#include<iostream>
using namespace std;
long int series(int n);

int main()
{
	int n;
	
	cout<<"\n ENTER THE LIMIT ";
	cin>>n;
	
	cout<<"\n MULTIPLICATION UPTO THE LIMIT = "<<series(n);
	
	return 0;
}

long int series(int n)
{
	if(n>1)
	return (n*n+n)*series((n-1)*(n-1)+(n-1));
	else
	return 1;
}
