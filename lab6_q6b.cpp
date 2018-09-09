#include<iostream>
using namespace std;
/*function to find the minimum of numbers*/ int findmin(int a,int b)
{
    int min;
    if(a<b)
    min=a;
    else if (b<a)
    min=b;
    return min;
}
/*function to find the maximum of numbers*/
int findmax(int a,int b)
{
    int max;
    if (a>b)
    max=a;
    if (b>a)
    max=b;
    return max;
}
/*function to find the sum of odd numbers between the two numbers*/
void sumOddNumbers(int a,int b)
{
    int s=0;
    for(int i=a+1;i<b;i++)
        if(i%2==1)
            s+=i;
    cout<<"\n sum of odd numbers between"<<a<<"and"<<b<<" ="<<s;
}
/* main function */
int main() 
{
     int num1,num2,c,d;
     /*ask the user for values*/         
     cout<<"\nEnter any two values";
     cin>>num1>>num2; 
     /*minimum and maximum are correctly   
     put into num1 and num2*/
     c=findmin(num1,num2);
     d=findmax(num1,num2);
    /*calling sum function for discrete values of num1 and num2*/
     if(num1!=num2)
     {
         num1=c;num2=d;
         sumOddNumbers(num1,num2);
      }
    /*if no numbers in between then sum=0*/   
     else 
     {
         cout<<"no numbers in between. hence required sum =0";
      }
      
      return 0;
}
