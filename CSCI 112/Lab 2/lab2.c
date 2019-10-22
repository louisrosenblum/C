#include <stdio.h>
#include <math.h>

/* Lab 2
 * Anthony Rosenblum
 * This program generates a certain number in a mathematical sequence.
*/

int main(void){
	// Function that calculates next integer in the sequence using the requested position in the sequence and the previous term
	int get_next(int x, int y){
		double k = pow(2,x-1);
		int w = (k *3) +y;
		return(w);

	}
	// Function that prints a message about a requested number in a sequence
	int print_result(int x){
		printf("The number requested in the sequence is %d", x);
	}
	
	// Executing the get_next() function five times to achieve the 5th term in the sequence
	int w = get_next(5,get_next(4,get_next(3,get_next(2,get_next(1,0)))));
	
	// Executing the print_result() function to print a message to the user
	print_result(w);
}