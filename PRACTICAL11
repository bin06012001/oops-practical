#include<iostream>
using namespace std;

class A
{
public:
int k;
void display()
{
cout<<"\n THIS IS THE DISPLAY METHOD FROM BASE CLASS A ";
}
};

class B:virtual public A
{
 public:
void display1()
{
cout<<"\n THIS IS THE DISPLAY1 METHOD FROM CLASS B  ";
}
};

class C:virtual public A
{
void display2()
{
cout<<"\n THIS IS THE DISPLAY2 METHOD FROM CLASS C ";
}
};

class D:public B,public C
{
public:
void display3()
{
cout<<"\n THIS IS THE DISPLAY3 METHOD FROM CLASS D ";
}
};

int main()
{
D d;
d.display1();
d.display2();
d.display3();
return 0;
}
  
