//include the libraries
#include <iostream>
using namespace std;
//declaring and defining function for finding maximum
int findmin(int a,int b)
{	//check for min value and assign it to the return varible
 	int min;
 	if(a<b)
 		min=a;
 	else if(b<a)
 		min=b;
 	// return the value to main
 	return min;
}
int main()
{	int a,b,c;
 	// ask user for the values of the variables
	cout<<"Enter any two values\n";
  	cin>>a>>b;
        //call the function and assign its return value to a varible
	c=findmin(a,b);
	
	if(c==0)
		cout<<"\n Both the entered numbers are equal\n";
        else 
		cout<<"\nMinimum is "<<c<<endl;
	return 0;
}
