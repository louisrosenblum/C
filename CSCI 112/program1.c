#include <stdio.h>

// Function to analyze a set of numbers
int analyze(int x){ // One input paramter for the number of numbers that will be analyzed
	double w[x]; //Array to store numbers
	for (int i = 1; i <= x; i++){ // For loop to input numbers to array
		printf("Please enter number %d: ", i);
		scanf("%lf",&w[i-1]);
	}
	double a = w[0]; // Double to store largest number
	double b = w[0]; // Double to store smallest number
	double c = 0; // Double to store sum of numbers
	double d; // Double to store avg of numbers
	for (int i = 0; i < x; i++){ // Process to determine largest, smallest, and average
		if(w[i] > a){
			a = w[i];
		}
		if(w[i] < b){
			b = w[i];
		}
		c = c + w[i];
	}
	d = c/x;
	
	//Collection of print statements to tell user
	printf("The largest number is: %lf \n", a);
	printf("The smallest number is: %lf \n", b);
	printf("The average is: %lf \n", d);
	return(0);
	}
	
	

	// Main driver
int main(void){
	int z;
	printf("How many numbers would you like to analyze? ");
	scanf("%d", &z);
	analyze(z); // Call analyze function on a set of z numbers
	return(0);
}