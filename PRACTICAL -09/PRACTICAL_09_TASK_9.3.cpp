#include<iostream>

using namespace std;

class Static
{
	
	public: static int a;
	Static(int b)
	{
		a++;
	}
};
int Static::a=0;

int main()
{
	Static s1(5),s2(6),s3(7),s4(7);
	
	cout<<"\n THE NUMBER OF TIMES THE FUNCTION IS CALLED ="<<Static::a;
}
