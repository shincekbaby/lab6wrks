//include the libraries
#include <iostream>
using namespace std;
char toUpper(char b)
{	char s;int a;
 	a=b;
	a=a-32;
	s=a;
	return s;
}
char toLower(char b)
{	char s;int a;
 	a=b;
	a=a+32;
	s=a;
	return s;
}	
int main()
{	char b,t;
	cout<<"\n Enter any alphabet (upper case or lower case) :";
	cin>>b;
	if(b>='A' && b<='Z')
	{
		t=toLower(b);
		cout<<"\nthe lower case of the entered alphabet is "<<t;
	}
	else if(b>='a' &&b<='z')
	{	
		t=toUpper(b);
		cout<<"\nthe upper case of the entered alphabet is "<<t;
	}
	else 
	cout<<"\n Sorry, The character entered is not an alphabet ";
        
	return 0;
}


