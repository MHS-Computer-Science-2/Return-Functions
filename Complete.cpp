// Return Functions

// I CAN write and call return functions


#include <iostream>
using namespace std;

//** Functions start here **

void perimeter(int length, int width) {
	cout << "Perimeter: " << 2 * length + 2 * width << endl;
}

// int is the RETURN TYPE. This function
// must return an int answer
int getPerimeter(int length, int width) {
	return 2 * length + 2 * width;
}
// A return statement specifies what value should be 
// returned. It must match the return type.
// You can only return ONE VALUE

double average(double a, double b) {
	return (a + b) / 2;
}

//** Functions end here **


void main()
{
	// Example 1
	// Rectangle 1 has length 3 and width 7
	// Rectangle 2 has length 15 and width 9
	// Using the perimeter function, display the sum of the perimeters
	int perimeter1 = getPerimeter(3, 7);
	int perimeter2 = getPerimeter(15, 9);
	cout << "Sum of perimeters: " << perimeter1 + perimeter2 << endl;

	// Non-void functions give us back an answer (return value)
	// We can do whatever we want with the answer - usually 
	// save it in a variable or print it

	// void functions DO NOT return an answer so saving
	// them in a variable or printing them does not work

	//int perimeter3 = perimeter(4, 5);
	//int perimeter3 = perimeter(4, 5);

	// TRY IT: Write a function that returns the average of 2 numbers
	cout << average(3, 4.5) << endl; //Should display 3.75



	system("pause");
}
