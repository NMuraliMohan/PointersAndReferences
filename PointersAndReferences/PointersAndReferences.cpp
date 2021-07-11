// PointersAndReferences.cpp : Defines the entry point for the console application.
//

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"


int main()
{
	int x = 200;
	int a = 3;
	cout << "a is " << a << endl;
	int& referenceToObjectA = a;
//	cout << sizeof(referenceToObjectA) << std::endl;;
	
	int b = 10;
	int c = 25;


	referenceToObjectA = 5;
	cout << "a is " << a << endl;

	referenceToObjectA = x;
	referenceToObjectA = 500;
	cout << " X is " << x << endl;
	cout << "referenceToObject X is " << referenceToObjectA << endl;
	cout << "a is " << a << endl;
	
	Person Kate("Kate", "Gregory", 234);
	Person& rKate = Kate;
	rKate.SetNumber(345);
	cout << "rKate: " << rKate.GetName() << " " << rKate.GetNumber() << endl;

	cout << "Kate: " << Kate.GetName() << " " << Kate.GetNumber() << endl;

	//int& badReference = a;
	//badReference = 25;
	//cout << "Bad reference: " << a << endl <<  referenceToObjectA << endl << badReference << endl;
	//badReference = 3;
	//cout << badReference;


	int* pA = &a;
	*pA = 4;
	cout << "a is " << a << endl;
	int b = 100;
	pA = &b;
	(*pA)++;
	cout << "a " << a << ", *pA " << *pA << endl; 

	Person* pKate = &Kate;
	(*pKate).SetNumber(235);
	pKate->SetNumber(236);
	cout << "Kate: " << Kate.GetName() << " " << Kate.GetNumber() << endl;
	cout << "pKate: " << pKate->GetName() << " " << pKate->GetNumber() << endl;

	//int *badPointer = NULL;
	//int& badReference = a;
	int* badPointer;
	badPointer = nullptr;
	if (badPointer)
	{
		*badPointer = 3;
		cout << *badPointer << endl;
	}
	
	return 0;
}

