#include<iostream>

using namespace std;

class Area
{
	int ar,arr;
	public:
	Area(int l,int b)
	{
		ar=l*b;
	}
	
	Area(int s)
	{
	
	arr=s*s;
}
	void print()
	{
		cout<<"\n AREA OF THE RECTANGLE ="<<ar;
		cout<<"\n AREA OF THE SQUARE ="<<arr;
	}

};

int main()
{
	Area a1(2);
	a1.print();
	
	
}
