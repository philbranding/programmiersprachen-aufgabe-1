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
	char 		c 	= ’a’;
	double 		d 	= 1.3;
	int const five 	= 5;
	double 		e 	= a/five;

	five = d; 

	return 0;
}




// Typen: 		int, bool, char, double 
// Variablen: 	a,b,c,d,c,five, e
// Werte:		9, false, 'a', 1.3, 5, a/five , d, 0;

