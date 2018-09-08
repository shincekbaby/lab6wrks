//include the libraries
#include <iostream>
using namespace std;
//declaring and defining function for finding minimum
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

void printsumeven(int n,int m)
{	int s=0,i=n+1;
	while(i<m)
 	{
		if(i%2==0)
 			s+=i;
		i++;
	}
 	cout<<"\n sum of even numbers between those numbers = "<<s;
}
 
int main()
{	int num1,num2,c,d;
 	// ask user for the values of the variables
	cout<<"Enter any two values\n";
  	cin>>num1>>num2;
        //call the function and assign its return value to a varible
	c=findmin(num1,num2);
	d=findmax(num1,num2);
	num1=c;
	num2=d;
	printsumeven(num1,num2);
        return 0;
}
	
