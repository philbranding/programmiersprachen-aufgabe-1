#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <iostream>
#include <string>


using namespace std;


double Mile = 0;
double Kilo = 1.60934;


double mileToKilometer(double Mile){
double Kilometer = Mile * Kilo;
	return  Kilometer;
}

TEST_CASE("mileToKilometer ","[mileToKilometer]")
{
	REQUIRE( mileToKilometer(1) == 1.60934 );
	REQUIRE( mileToKilometer(10) == 16.0934 );
	REQUIRE( mileToKilometer(100) == 160.934 );
}


int main(int argc, char const *argv[])
{
	double Mile = 0;
	cout<< "________________________Convert Miles to Kilometers__________________________" << endl;
	cout<< "Please give the Number of Miles you want to convert to Kilometers : ";
	 
	 	cin >> Mile;
	 	if (Mile >= 0.0000000)
	 {
	 	cout << Mile << "mi(s) = " << mileToKilometer(Mile) << "km(s)" <<endl;
	 	cout<< "_____________________________________________________________________________" << endl;
	 }
		

	return Catch::Session().run( argc, argv);
}