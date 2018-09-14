//include the library files and start main
#include <iostream>
using namespace std;
/*
Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
*/
void return3values(int &unitCst, int & units, int & taxRt)
{
	cout << "Enter unitCst";
	cin >> unitCst;
	cout << "Enter units";
	cin >> units;
	cout << "Enter taxRt";
	cin >> taxRt;
}

/*
Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
*/

void calculate(int unitCst, int units, int taxRt, int &salesTax, int &totDue)
{
// that receives the unitCst, units, and taxRt
// Code to calculate salesTax
salesTax = taxRt*(units*unitCst);
// Code to totDue
totaDue = salesTax+(units*unitCst);
// returns to the calling module the salesTx and totDue.
// this is done by reference
}
/*
Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
*/

void outv(int unitCst, int units, int taxRt, int salesTx, int totDue)
{
cout<<"\n"<<unitCst<<" "<<units<<" "<<taxRt<<" "<<salesTx<<" "<<totDue;
}

/*
Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
Pseudocode and Indentation must be present.

*/

int main()
{ 	int unitCst,units,taxrt;
	// Ask for unitCst,units,taxrt
	return3values(unitCst, units, taxRt);
	// Unitcst
	int salesTax = 0, totDue = 0;
	calculate(unitCst,units,taxRt,salesTax,totDue);
	// all values are filled.
	void outv(unitCst,units,taxRt,salesTx,totDue);
	return 0;
}



