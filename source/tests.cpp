#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <stdexcept>


float Pi = 3.14159265; 
int Two = 2;



//Aufgabe 1.8 GCD Funktion Implementation ---------------------------


//Aufgabe Division by 0 Test Funktion Implementation ----------------

int Division(int num, int den) 
{ 
    if (den == 0 || num == 0){
  		return false;
	} 

	else {
  		return true;
	}
  
}


int gcd(int a, int b) 
{
	if(Division(a,b)==true){

	int gcd = 0;
	for(int i=1; i<=a && i<=b; i++){
		if(a%i == 0 && b%i == 0 )
		{
	        gcd=i;
   		}
	}
	return gcd;
	} 
    else {
    	std::cout <<"\n ********** TEST ERROR DETECTED: You tried dividing by 0 ************ \n" << std::endl;
    	throw std::runtime_error("Math error: Attempted to divide by zero\n"); 

    }
}



//Aufgabe 1.9 CheckSum  Funktion Implementation---------------------- 

int checksum(int a)
{ 
	int sum = 0;

    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}


//Aufgabe 1.10 sumMultiples  Funktion Implementation---------------------- 
//takes two user defined parameters and (3&5 and uses 1-1000 to calculate)

int sumMultiples(int a, int b)
{ 
		int sum = 0;
		 for( int i = 1; i <= 1000; ++i )
		 {			       
			if (i%a==0 || i%b==0 )
			   	{
			   	   	sum = sum + i;
			   	}
		 }

	return sum;
}


//Aufgabe 1.11 Fraction Anteil---------------------------------------

int fract(float frac)
{
    double integer, value = frac, number = modf(value, &integer);
    return number;
}



//Aufgabe 1.12 The Volume and Area of a Cylinder----------------------

float cyclinderVolume(int radius, int height)
{ 
	float Volume = (Pi * (radius * radius) * height);
	return Volume;
}

float cylinderArea(int r, int h){
	float Area = (Two * Pi * r * h) + (Two * Pi * (r * r));

	return Area;
}


//Aufgabe 1.13 The Factorial Function----------------------------------

int factorial(int num)
{
    if(num > 1)
        return num * factorial(num - 1);
    else
        return 1;
}


//Aufgabe 1.14 The Binomial Function----------------------------------

double binomial(double x, double y)
{
    double number;
  	if(y == 1)
  		return x;
     	
    number = (factorial(x))/(factorial(y)*factorial((x - y)));
    return number;
   }

//Aufgabe 1.15 The Prime Number Function------------------------------


bool is_prime(int number)
{
  if (number < 2)
    return false;

  for(int i=2;i<number;i++)
  {
    if(number%i==0)
    {
    	return false;
    }
  }
  return true;
} 



//TESTS CASES---------------------------------------------------------


TEST_CASE ("describe_gcd", "[gcd]")
{
	REQUIRE (gcd(2,4) == 2);
	REQUIRE (gcd(9,6) == 3);
	REQUIRE (gcd(3,7) == 1);
	REQUIRE (gcd(1, 123456)== 1);
	
	//Tests for exceptions Division by 0

  //REQUIRE (gcd(1,0) == 1);
  //REQUIRE (gcd(0,0) == 0);

}



TEST_CASE ("describe_checksum", "[checksum]")
{
	REQUIRE (checksum(112601) == 11);
	REQUIRE (checksum(000000) == 0);
	REQUIRE (checksum(111111) == 6);
	REQUIRE (checksum(12345) == 15);
	REQUIRE (checksum(1) == 1);
	REQUIRE (checksum(02) == 2);
	REQUIRE (checksum(-1) == -1);
}



TEST_CASE ("describe_sumMultuples", "[sumMultiples]")
{
	REQUIRE (sumMultiples (3,5) == 234168);
	REQUIRE (sumMultiples (1,5) == 500500);
	REQUIRE (sumMultiples (1,3) == 500500);

	//Test for exceptions
	//REQUIRE (sumMultiples (0,0) == 0);
}



TEST_CASE("tests_fract","[fract]")
{
	REQUIRE(1.9999 == Approx( 2.0 ).epsilon(0.001));
	REQUIRE(7.009999 == Approx( 7.01 ).epsilon(0.001));
	REQUIRE(0.009999 == Approx( 0.01 ).epsilon(0.001));
	REQUIRE(0.00009 == Approx( 0.0001 ).epsilon(0.0001));
	REQUIRE(78899.9 == Approx( 78900.0).epsilon(0.1));

	//Test with Zero 
	REQUIRE(0.000 == Approx( 0.0 ));


}



TEST_CASE("tests_cylinder","[cylinder]")
{
	REQUIRE( cyclinderVolume (10,5) == 1570.79639f);
	REQUIRE( cylinderArea (10,5) == 942.47778f);
}



TEST_CASE("tests_factorial","[factorial]")
{
	REQUIRE( factorial(1) == 1);
	REQUIRE( factorial(5) == 120);
	REQUIRE( factorial(7) == 5040);
	REQUIRE( factorial(10) == 3628800);
}




TEST_CASE("tests_binomial","[binomial]")
{
	REQUIRE( binomial (5,3) == 10);
	REQUIRE( binomial (5,4) == 5);
	REQUIRE( binomial (10,3) == 120);
}




TEST_CASE("tests_is_prime","[is_prime]")
{
	REQUIRE( is_prime(7) == true );
	REQUIRE( is_prime(3) == true );
	REQUIRE( is_prime(4) == false);
	REQUIRE( is_prime(5) == true );
	REQUIRE( is_prime(149) == true );
	REQUIRE( is_prime(1000) == false);
	REQUIRE( is_prime(3889) == true);

}




int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}