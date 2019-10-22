#include <stdio.h>

int main(void) {
	// Creates a double for the original Celsius temp
	double celsius;
	// Creates a double for the Fahrenheit temp to be calculated
	double fahrenheit;
	
	// Prompts the user for a temp input
	printf("Please enter a temperature in degrees Celsius: ");
	// Collects a temp input from the user
	scanf("%lf", &celsius);
	// Converts the celsius temp to Fahrenheit
	fahrenheit = (celsius * 1.8) + 32;
	// Prints the newly converted temperature
	printf("The equivalent temperature in Fahrenheit is: %lf degrees\n",fahrenheit);
	// Concludes the program
	return(0);
}