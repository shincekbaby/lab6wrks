//include libaries
#include <iostream>
using namespace std;
//declaration of function
void findmin(int a,int b,int &c)
{//assign suitable value for c	
	if(a<b)
		c=a;
	else if(b<a)
		c=b;
}
//main function
int main()
{	int a,b,c;
	//ask the user for values for the varibles
	cout<<"\nEnter any two values\n";
	cin>>a>>b;
	//call function
	findmin(a,b,c);
	//check equality and then print the min
	if(c==0)
		cout<<"\nBoth are equal\n";
	else
		cout<<"\nMinimum is "<<c<<endl;
	return 0;
}

