//include the libraries
#include <iostream>
using namespace std;
//declaring and defining function for finding maximum
int findmax(int a,int b)
{	//check for max value and assign it to the return varible
 	int max;
 	if(a>b)
 		max=a;
 	else if(b>a)
 		max=b;
 	// return value to main
 	return max;
}
int main()
{	int a,b,c;
 	// ask user for the values of the variables
	cout<<"Enter any two values\n";
  	cin>>a>>b;
        //call the function and assign its return value to a varible
	c=findmax(a,b);
	
	if(c==0)
		cout<<"\n Both the entered numbers are equal";
        else 
		cout<<"\nMaximum is "<<c;
	return 0;
}
