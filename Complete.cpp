// Void Functions and Parameters

// I CAN write and call functions
// I CAN explain and use function parameters


#include <iostream>
using namespace std;

//** Functions start here **

void area(int length, int width) {
	cout << "Area: " << length * width << endl;
}

// int is the RETURN TYPE. This function
// must return an int answer
int getArea(int length, int width) {
	return length * width;
}
// A return statement specifies what value should be 
// returned. It must match the return type.
// You can only return ONE VALUE

double average(double a, double b) {
	return (a + b) / 2;
}

//** Functions end here **


int main()
{
	// Example 1
	// Rectangle 1 has length 3 and width 7
	// Rectangle 2 has length 15 and width 9
	// Using the area function, display the sum of the areas
	int area1 = getArea(3, 7);
	int area2 = getArea(15, 9);
	cout << "Sum of areas: " << area1 + area2 << endl;

	// Non-void functions give us back an answer (return value)
	// We can do whatever we want with the answer - usually 
	// save it in a variable or print it

	// void functions DO NOT return an answer so saving
	// them in a variable or printing them does not work

	//int area3 = area(4, 5);

	// TRY IT: Write a function that returns the average of 2 numbers
	cout << average(3, 4.5) << endl; //Should display 3.75



	system("pause");
}
