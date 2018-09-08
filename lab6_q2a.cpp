//include the library files and start the main
#include<iostream>
using namespace std;
//sum function declaration and definition
void sum(int a,int b){
	//find sum
 	int s=a+b;
 	//print them
 	cout<<a<<"+"<<b<<"="<<s;
 	cout<<endl;
}
int main(){
		
	//declare varibles to which the numbers are stored
	cout<<"Program to find sum of two functions using functions(call by value method)";        
	int a,b;
	cout<<"\nEnter any two numbers\n";
	cin>>a>>b;
	
	//calling the function by value
        sum(a,b);
	return 0;
}
