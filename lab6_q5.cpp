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
void sum(int a,int b){
	//find sum
 	int s=a+b;
 	//print them
 	cout<<a<<"+"<<b<<"="<<s;
 	cout<<endl;
}
int main()
{	int a,b,c,d;
 	// ask user for the values of the variables
	cout<<"Enter any two values\n";
  	cin>>a>>b;
	cout<<"\nWhat action do you want to perform with these two values \nEnter 1 to find sum\nEnter 2 to find minimum of the numbers \nEnter 3 to find maximum of the two numbers\n";
	cin>>d;
	if(d==1)
		sum(a,b);
	else if (d==2)
		{c=findmin(a,b);
		 if(c==0)
			cout<<"\n Both the entered numbers are equal\n";
       		 else 
			cout<<"\nMinimum is "<<c<<endl;
		}
	else if (d==3)
		{c=findmax(a,b);
	
		 if(c==0)
			cout<<"\n Both the entered numbers are equal";
        	 else 
			cout<<"\nMaximum is "<<c;
		}
	else
		cout<<"\nsorry wrong input";
	return 0;
}
		

