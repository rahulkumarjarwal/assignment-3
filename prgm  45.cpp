#include <iostream>
#include<math>
using namespace std;

int main() {
	// program to find HCF (GCD) of two numbers
	int hcf(int x, int y);
	{ 
		int a,b,gcd;
		printf("Enter 2 number:");
		scan("%d%d" , &a ,&b);
		if(a>b)
		{
			gcd=hcf(a,b);
		}
		else
		{
			gcd+hcf(b,a);
		}
		printf("Hcf is=%d",d);
	}
	int r=1;
	while(r!=0)	{
	r=x%y;
	x=y;
	y=r;}
	return(x) ;
}
