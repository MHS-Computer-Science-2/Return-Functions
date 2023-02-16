// Return Functions
// I CAN explain the purpose of functions in C++
// I CAN write and call return functions
// I CAN explain and use function parameters

#include <iostream>
using namespace std;

//Functions should be written above main()

int f(int x) {
	return 6 * x - 9;
}

int perimeter(int length, int width) {
	int result1 = 2 * length;
	int result2 = 2 * width;
	return result1 + result2;
	//The RETURN STATEMENT specifies the OUTPUT of the function
	//A function can have multiple calculations, but only 1 value
	//can be returned.The function stops at the return statement.
}

double average(int a, int b) {
	return (a + b) / 2.0;

	//The word DOUBLE in this function is the RETURN TYPE
	//It specifies what type of information (int, double, string)
	//the function outputs (returns)
}


int main()
{
	//EXAMPLE 1
	//Consider a function from math class: f(x) = 6x - 9
	// What is f(4)?
	// What is f(-5)?
	// What is f(0)?

	//Let's teach C++ to do this function for us
	cout << f(4) << endl;
	cout << f(-5) << endl;
	cout << f(0) << endl;

	//f is the IDENTIFIER (name) of the function 
	//You can use any name that you want

	//4, -5, and 0 are PARAMETERS. These are the inputs to the function.


	//EXAMPLE 2
	//Let's write a function that computes the perimeter of a rectangle
	//with length 5 and width 12
	cout << "Perimeter: " << perimeter(5, 12) << endl;
	

	//EXAMPLE 3
	// TRY IT: Write a function that returns the average of 2 numbers
	double a = average(3, 6);
	cout << "The average is: " << a << endl;


	//WHY FUNCTIONS?
	//Functions serve two main purposes:
	// 1. Code Reuse. We can write the code once and call it over and over
	// 2. Organization. We can break one large task into smaller subtasks.

	

	system("pause");
}
