#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cout<<"SENTENCE =\n";
	getline(cin,str);
	
	string::reverse_iterator ri=str.rbegin();
	
	if(equal(str.rbegin(),str.rend(),ri))
	
	cout<<str<<" is a palindrome "<<endl;
	else
	cout<<str<<" is not a palindrome "<<endl;
	return 0;
}
