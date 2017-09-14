#include <iostream>
using namespace std;

int main() {
	//  Program to check whether a year is leap year or not
	int y;
	cout<<"Enter year="<<endl;
	cin>>y;
	if(y%100==0)
	{
	if(y%400==0)
	cout<<"is a leap year"<<y<<endl;
	else
	cout<<"not a leap year"<<y<<endl;
	}else
	if(y%4==0)
	cout<<y<<"is a leap year\n";
	else 
	cout<<"not  leap year\n";
	return 0;
}#include <iostream>
using namespace std;

int main() {
	//  Program to check whether a year is leap year or not
	int y;
	cout<<"Enter year="<<endl;
	cin>>y;
	if(y%100==0)
	{
	if(y%400==0)
	cout<<"is a leap year"<<y<<endl;
	else
	cout<<"not a leap year"<<y<<endl;
	}else
	if(y%4==0)
	cout<<y<<"is a leap year\n";
	else 
	cout<<"not  leap year\n";
	return 0;
}
