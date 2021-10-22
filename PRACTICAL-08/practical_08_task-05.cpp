#include<iostream>
using namespace std;
int factorial(int n);

int main()
{
    int n;
    cout<<"\n ENTER THE NUMBER =";
    cin>>n;
    
    cout<<"\n FACTORIAL OF THE NUMBER ="<<factorial(n);
    return 0;
    
	
	
}

int factorial(int n)
{
	if(n>=1)
	return n*factorial(n-1);
	else
	return 1;
	
}
