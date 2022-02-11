// Return Functions

// I CAN write and call return functions


#include <iostream>
using namespace std;

//** Functions start here **

void perimeter(int length, int width) {
	cout << "Perimeter: " << length * width << endl;
}

// int is the RETURN TYPE. This function
// must return an int answer


// A return statement specifies what value should be 
// returned. It must match the return type.
// You can only return ONE VALUE



//** Functions end here **


int main()
{
	// Example 1
	// Rectangle 1 has length 3 and width 7
	// Rectangle 2 has length 15 and width 9
	// Using the perimeter function, display the sum of the perimeters
	

	// Non-void functions give us back an answer (return value)
	// We can do whatever we want with the answer - usually 
	// save it in a variable or print it

	// void functions DO NOT return an answer so saving
	// them in a variable or printing them does not work

	//int perimeter3 = perimeter(4, 5);
	//int perimeter3 = perimeter(4, 5);

	// TRY IT: Write a function that returns the average of 2 numbers
	
	//Should display 3.75



	system("pause");
}
