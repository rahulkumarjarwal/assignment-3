#include <iostream>

using namespace std;

int main() {
	// program to find all roots of a quadratic equation
	int a,b,c,d,root1,root2,real,img;
	cout<<"Enter a,b & c\n";
	cin>>a>>b>>c;
	if(a==0)
	cout<<"Equation is linear\n";
	else
	{
		d=b*b-a*a*c;
		if(d==0)
		cout<<"Roots are real & equal \n";
		Root1=Root2=(-b)/(2*a);
		cout<<"Root1=Root2="<<Root1<<endl;
		// cout<<"Root1=Root2="<<-b/(2*a)<<endl;
	}
	else
	if(d>0)
{	cout<<"Roots are re4al & unequal\n";
cout<<"Root1="<<(-b+sqrt(d)/(2*a)<<endl;
cout<<"Root2="<<(-b+sqrt(d)/(2*a)<<endl;	
}
else
{ cout<<"Roots are imaginary \n";
real=-b/(2*a);
img=subt(-d)/(2*a);
cout<<"Root1="<<real<<"+i"<<img<<endl;
cout<<"Root2="<<real<<"-i"<<img<<endl;
	return 0;
}
