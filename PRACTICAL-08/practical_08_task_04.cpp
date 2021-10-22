#include<iostream>
using namespace std;

int main()
{
	int i,n,fact=1;
	cout<<"\n ENTER THE NUMBER TO FIND THE FACTORIAL ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	
	cout<<"\n THE FACTORIAL OF THE NUMBER ="<<fact;
	return 0;
}
