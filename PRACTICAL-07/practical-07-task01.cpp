#include<iostream>

using namespace std;

int main()
{
	int a;
	
	cout<<"\n ENTER YOUR CHOICE (1,2,3,4)=";
	cin>>a;
	
	switch(a)
	{
		case 1:
			{
				cout<<"\n 2021";
				break;
			}
		case 2:
			{
				cout<<"\n OCTOBER";
				break;
			}
		case 3:
			{
				cout<<"\n TUESDAY";
				break;
			}
		default:
			printf("\n Not Applicable");
			
	}
	return 0;
}
