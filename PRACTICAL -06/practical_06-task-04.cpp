#include<iostream>
#include<string>
using namespace std;

int main()
{
	char str1[100],str2[100];
	int i=0,check=0;
	cin>>str1;
	cin>>str2;
	
	while(str1!='\0'||str2!='\0')
	{
		if(str1[i]!=str2[i])
		{
		
		check=1;
		break;
	}
		i++;
	 } 
	 
	 if(check==0)
	 cout<<"\n STRINGS ARE NOT EQUAL ";
	 else
	 cout<<"\n STRINGS ARE EQUAL";
	 return 0;
}
