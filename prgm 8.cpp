#include <iostream>

using namespace std;

int main() {
	// program to input any alphabet and check whether it is vowel or consonant.
	 char ch, str[100],int nv=0,i,int nc=0;
	 cout<<"Enter a string=\n";
	 gets(str);
	 for(i=0; str[i]!='\0'; i++)
	 {ch=to lower(str[i]);
	 if()ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	 nv++;
	 }
	 cout<<"Number of vowels present in a line ="<nv<<endl:
	 cout<<"NUMBER of consonant present in a line="<<nc<<endl;
	 
	return 0;
}
