#include<iostream>
using namespace std;

int main()

{
	char a='a';
	bool b=false;
	short c=21;
	int d=10;
	long e=55555;
	float f=2.3;
	double g=2.333
	long double h=2.333333;
	wchar_t i='l';
	
	cout<<sizeof(char)<<endl<<sizeof(a)<<endl<<endl;
		cout<<sizeof(bool)<<endl<<sizeof(b)<<endl<<endl;
			cout<<sizeof(short)<<endl<<sizeof(c)<<endl<<endl;
				cout<<sizeof(int)<<endl<<sizeof(d)<<endl<<endl;
					cout<<sizeof(long)<<endl<<sizeof(e)<<endl<<endl;
						cout<<sizeof(float)<<endl<<sizeof(f)<<endl<<endl;
							cout<<sizeof(double)<<endl<<sizeof(g)<<endl<<endl;
								cout<<sizeof(long double)<<endl<<sizeof(h)<<endl<<endl;
									cout<<sizeof(wchar_t)<<endl<<sizeof(i)<<endl<<endl;
									return 0;
}
