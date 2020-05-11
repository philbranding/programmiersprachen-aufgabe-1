/*****************************************************************
 * UBUNGS 01: Aufgabe 1.3
 *
 * Name     : Phillip Mudavanhu
 *
 * Mtrkln   : 112601
 *  
 * Topic    : A ggT programm for 1-20 C++
 *
 *****************************************************************/


/*

Aufgabe 1.3

Ein Programm, welches die kleinste Zahl,
die durch die Zahlen 1 bis 20 teilbar ist errechnet 
und auf der Konsole ausgibt. [2 Punkte]

*/
#include <iostream>
using namespace std; 
  
// Function returns the gcd 

int gcd(long a, long b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
}


long long ggT(long long n) 
{ 
    long long divisor = 1;     
    for (long long i = 1; i <= n; i++) 
        divisor = (divisor * i)/(gcd(divisor, i)); 
    return divisor; 
} 
  
// Main function for testing 
int main()  
{ 
    long long theInput = 20;  
    cout <<"The smallest number that is divisible by 1 and " << theInput << " is : " << ggT(theInput) << "\n"; 
    return 0; 
} 