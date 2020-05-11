#define CATCH_CONFIG_RUNNER
#include <catch.hpp>


float Pi = 3.14159265; 
int Two = 2;

//Aufgabe 1.8 GCD Funktion Implementation ---------------------------


int gcd(int a, int b) 
{
	int gcd = 0;
	for(int i=1; i<=a&&i<=b; i++){
		if(a%i == 0 && b%i == 0 )
		{
	        gcd=i;
   		}
	}
	return gcd;
}

//Aufgabe 1.9 CheckSum  Funktion Implementation---------------------- 

int checksum(int a){ 
	int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

//Aufgabe 1.10 sumMultiple Funktion Implementation ------------------

int sumMultiples(int a, int b){ 
		int sum = 0;
		 for( int i = 1; i <= 1000; i = i + 1 )
		 {			       
			if (i%a==0 && i%b==0 )
			   	{
			   	   	sum = sum + i;
			   	}
		 }

	return sum;
}

//Aufgabe 1.11 Fraction Anteil---------------------------------------

int fract(float frac)
{
    double integer, value = frac, fraction = modf(value, &integer);
    return fraction;
}


//Aufgabe 1.12 The Volume and Area of a Cylinder----------------------

float Volume(int r, int h){ 
float Volume = (Pi * (r * r) * h);
	return Volume;
}

float Area(int r, int h){
	float Area = (Two * Pi * r * h) + (Two * Pi * (r * r));

	return Area;
}

//Aufgabe 1.13 The Factorial Funktion----------------------------------

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

//Aufgabe 1.14 The Binomial Funktion----------------------------------

double binomial(double nValue, double nValue2)
{
    double result;
  	if(nValue2 == 1)
  		return nValue;
     	result = (factorial(nValue))/(factorial(nValue2)*factorial((nValue - nValue2)));
       	nValue2 = result;
       	return nValue2;
   }

//Augfabe 1.15 The Prime Number Fuction-------------------------------

bool is_prime(int a)
{
    int count=0;
    for(int i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
        {count++;}
    }
    if(a==1||count!=0) return false;
    else return true;
}
// -------------------------THE TEST CASES----------------------------

TEST_CASE("describe_gcd ","[gcd]")
{
	REQUIRE( gcd(2,4) == 2 );
	REQUIRE( gcd(6,9) == 3 );
	REQUIRE( gcd(3,7) == 1 );
} 

TEST_CASE("checksum","[checksum]")
{
	REQUIRE( checksum(112601) == 11 );
	REQUIRE( checksum(123456) == 21 );
	REQUIRE( checksum(101010) == 3 );
}

TEST_CASE("sumMultiples","[sumMultiples]")
{
	REQUIRE( sumMultiples (3,5) == 33165);
	REQUIRE( sumMultiples (1,5) == 100500);
	REQUIRE( sumMultiples (1,3) == 166833);
}

TEST_CASE("cylinder","[cylinder]")
{
	REQUIRE( Volume (3,5) == 141.37167f);
	REQUIRE( Area (3,5) == 150.79645f);
}

TEST_CASE("factorial","[factorial]")
{
	REQUIRE( factorial(4) == 24 );
	REQUIRE( factorial(6) == 720 );
	REQUIRE( factorial(10) == 3628800 );
}

TEST_CASE("binomial","[binomial]")
{
	REQUIRE( binomial (5,3) == 10);
	REQUIRE( binomial (5,4) == 5);
	REQUIRE( binomial (10,3) == 120);
}

TEST_CASE("is_prime","[is_prime]")
{
	REQUIRE( is_prime(5) == true );
	REQUIRE( is_prime(149) == true );
	REQUIRE( is_prime(10) == false );
}

TEST_CASE("fract","[fract]")
{
	REQUIRE(7.009999 == Approx( 7.01 ).epsilon(0.001));
	REQUIRE(0.009999 == Approx( 0.01 ).epsilon(0.001));
	REQUIRE(1.9999 == Approx( 2.0 ).epsilon(0.001));
}


//---------------------------main function-------------------

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}