
/*

Aufgabe 1.3

Ein Programm, welches die kleinste Zahl,
die durch die Zahlen 1 bis 20 teilbar ist errechnet 
und auf der Konsole ausgibt. [2 Punkte]

*/

using namespace std; 
  
// Function returns the gcd 

int gcd(long a, long b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
}


long long ggT(long long n) 
{ 
    long long ans = 1;     
    for (long long i = 1; i <= n; i++) 
        ans = (ans * i)/(gcd(ans, i)); 
    return ans; 
} 
  
// Main function for testing 
int main()  
{ 
    long long n = 20; 
    cout << ggT(n); 
    return 0; 
} 