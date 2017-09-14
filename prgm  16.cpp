#include <iostream>
using namespace std;

int main() {
	// program to check whether the triangle is equilateral, isosceles or scalene triangle
	int a,b,c;
cout<<"Enter the values of a,b and c \n";
cin>>a>>b>>c;
if(a==b && b==c)
cout<<"The triangle is equilateral \n";
if(a!=b && b!=c && c!=a)
cout<<"The triangle is  scalene|\n";
else
cout<<"The triangle is equilateral\n";
	return 0;
}
