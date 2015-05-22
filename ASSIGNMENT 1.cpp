#include<iostream>
using namespace std

;
int main ()
{
	int firstinteger;
	int secondinteger;
	
	cout << "enter integer: ";
	cin >> firstinteger;
	
	
	secondinteger = firstinteger/ 2;
	if (firstinteger % secondinteger ==0)
	
	cout << firstinteger << "is an even number\n" ;
	
	else
	cout << firstinteger << "is an odd number\n";
	return 0;
}
