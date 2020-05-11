/* Aufgabe 1.4

Informieren Sie sich über Typen in C++. 
Benennen Sie im Folgenden Beispiel Typen, Variablen und Werte. 
Erklären Sie in diesem Zusammenhang das Schlüs- selwort const. 
Was ist eine Typkonvertierung und wieso kann es dabei Probleme
geben? Wo sehen Sie Probleme im nachfolgenden Programmcode?

*/

int main() {
	int 		a 	= 9;
	bool 		b 	= false;
	char 		c 	= 'a';
	double 		d 	= 1.3;
	int const five 	= 5;
	double 		e 	= a/five;

	five = d; 

	return 0;
}




// Typen: 		int, bool, char, double 
// Variablen: 	a,b,c,d,c,five, e
// Werte:		9, false, 'a', 1.3, 5, a/five , d, 0;

//Const 
//- means that the assigned value will not be allowed to change during the running of the programm, 
// it remains as a fixed Constant throughout the lifetime of the programm during the runtime.
// trying to change the assigned value in the programm after assigning a value to it will result in a runtime error
// as ccan be expected with the part where (five = d)

//Typkonvertierung
//This is the conversion on one Primary data type to the other. For example from an INTEGER to a DOUBLE 
//This results in  compatibility issues and can cause data loss especially when converting from a bigger memory space into a smaller one
// for example the type conversion of a DOUBLE to INTERGER results in the loss of all data after the COMMA. 

//Problems in the programm
//1) The reassignemnt of a const value (five = d) will result in an error : read-only variable is not assignable
//2) The type conversion of the double into an int value will result in data loss :  (int five = double d (1.3))

