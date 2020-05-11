/*****************************************************************
 * UBUNGS 01: Aufgabe 1.6
 *
 * Name     : Phillip Mudavanhu
 *
 * Mtrkln   : 112601
 *  
 * Topic    : Declaration, Definition, Intialization in C++
 *
 *****************************************************************/



/* 

DECLARATION
The declaration means we are saying to a computer that this “thing” 
(it can be a variable, a function or a class) exists but we don’t know where. 
In the future, we may tell but right now it just exists somewhere. 
In simple words, we don’t allocate memory while declaring. 
We can declare that “thing” many times.

DEFINATION
The definition means we are saying to the computer that this “thing” needs memory 
and it needs to be located somewhere. In simple words, defining means we have allocated memory for it. 
We can define something only once

INTIALIZATION
The initialization means whatever our “thing “ is, we are giving it an initial value. 
That “thing” must be in some memory location and if we keep that location empty, it may be a house for bugs and errors. 
Initialization is not always necessary but it’s important.

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
	int result = a * b;
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
