/*****************************************************************
 * UBUNGS 01: Aufgabe 1.7
 *
 * Name     : Phillip Mudavanhu
 *
 * Mtrkln   : 112601
 *  
 * Topic    : Signature of a Funktion and Scope of a Variable C++
 *
 *****************************************************************/



/* 

DAufgabe 1.7
Was gehört zur Signatur einer Funktion? Variablen haben einen Gültigkeitsbe- reich (scope). 
Bestimmen Sie die Gültigkeitsbereiche aller Variablen im folgenden Beispiel.

*/

//Example



//Variables
#include <iostream>

int var = 3;   									//Global Variable (not expelicitly used in the program)

//Functions
double sum(double a, double b){					//local parameters being used and after return statement a+b will be out of scope
	return a + b;								// the new value will be passed to the function that called the sum function

};

double square(int var){							//local Variable passed as a paramenter and used in the function and once returned statement is reached 
	return var * var;							//The var will be out of scope and the value passed to the function that called square func

};


int main()
{
	for (int i = 0; i != 100; ++i){							// local i variable alive only during the scope of the For Loop and  
		std::cout << "i ^ 2 = " << square(i) << '\n';		// with each iteration the i is updated and used here
		std::cout << "i + i = " << sum(i,i) << '\n';		// with each iteration the i is updated and used here

	}														// once out of the loop the variable i is out of scope

	return 0;
}
