/*****************************************************************
 * UBUNGS 01: Aufgabe 1.5
 *
 * Name     : Phillip Mudavanhu
 *
 * Mtrkln   : 112601
 *  
 * Topic    : intilization and assignment in C++
 *
 *****************************************************************/




UserType1 A; // Assignment
UserType2 B = A; 


UserType1 A; //intialisation
UserType2 B; //intialisation

B = A;       //Assignment / allocation 

UserType A = 10; 
UserType B = 20; 


A = B/C // Allocation 



/* 

INTIALIZATION
The initialization means whatever our “thing “ is, we are giving it an initial value. 
That “thing” must be in some memory location and if we keep that location empty, it may be a house for bugs and errors. 
Initialization is not always necessary but it’s important.

*/

/* 

ASSIGNEMNT
The assignment of an whatever our “thing “ is,the operators modify the value of the object in the memory.
That “thing” in some memory location with be given some data to store, or replace whats exisiting already of delete whats stored.
Or we can also copy whats stored from one memory location into another. If you try to assign and undefined object there will be an error.

Assignment can be done to already intialized or declared objects, in the memory. 
*/


//Example



//Variables
#include <iostream>
#include <string>
using namespace std;

extern int var; 	 // declaration of a variable called var and can be called by just using var = 10 for example
int var = 10; 	 // initialize of the variable with a value of 10
int var2 = 20;  // definetion of a memory space, calling it var2 and assigning a value of 10*/





//Functions
extern int add(int,int); //declaration of the function called add that takes two integers and returns another int (signature)

int add(int a, int b); //

static int multiply(int a=10, int b=20){ //Function Intialization 
	int result = a * b; //Zuweisung
	return result;
}

static double add(double a, double b){ // Function Definition 
	return a + b; 
}





//Class

//Declaration
class MyClass;
struct MyStruct;



//Definition 
class MyClass {
public:
	void getprint(string mgs){
		string message = mgs;
	}

private:
	void print( string message){

		cout << message <<endl;
	}
};

struct MyStruct {
	void print(){
		cout << "this is a STRUCT that has been declared and defined" <<endl;
	}
};





int main(int argc, char const *argv[])
{
	//cout << add(2,3) << endl;
	cout << "Variables" <<endl;
	cout << "extern Variable results 					:" << var << endl;
	cout << "Variable declaration and definition        :" << var2 << endl;

	cout << " " <<endl;
	cout << "Functions" <<endl;
	cout << "Function Definition results                : " << add(2.3, 5.0) << endl;
	cout << "Function Asignment results                 : " << multiply() <<endl;
	cout << "Function Declaration and Definition results: " << multiply(2,2) << endl;

	cout << " " <<endl;
	cout << "Class" << endl;

	MyStruct A;
	A.print();

	MyClass B;
	B.getprint("this is a CLASS that has been declared and defined");


	return 0;
}
