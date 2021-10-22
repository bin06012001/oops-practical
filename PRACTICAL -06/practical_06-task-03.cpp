#include<iostream>
#include<string>
//using namespace std;
int main()
{
	std::string str ("now step live...");
//	string r=str;
	for(std::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
	std::cout<<*rit;
	return 0;
}

