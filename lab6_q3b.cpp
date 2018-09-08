//include libaries
#include <iostream>
using namespace std;
//declaration of function
void findmax(int a,int b,int &c)
{//assign suitable value for c	
	if(a>b)
		c=a;
	else if(b>a)
		c=b;
}
//main function
int main()
{	int a,b,c;
	//ask the user for values for the varibles
	cout<<"\nEnter any two values";
	cin>>a>>b;
	//call function
	findmax(a,b,c);
	//check equality and then print the max
	if(c==0)
		cout<<"\nBoth are equal";
	else
		cout<<"\nMaximum is "<<c;
	return 0;
}

