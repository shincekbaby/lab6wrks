//include the library files
#include<iostream>
using namespace std;
//declare and define summing function
void sum(int x,int y,int &z)
{//sum values 	
	 z=x+y;
}
//start main 
int main(){
	//declare variables and ask for its value to the user
	int a,b,c;
	cout<<"\nEnter any two values ";
	cin>>a>>b;
	//call summing function
	sum(a,b,c);
	cout<<"Sum ="<<c;
	return 0;

}
