#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// New struct course
typedef struct course{
	char *name;
	char *id;
	int credits;
	
} course;

// Function to print the information for the course
void print(struct course x){
	char *a = x.name;
	char *b = x.id;
	int c = x.credits;
	printf("Class ID-%s Name-%s Credits-%d\n", b, a, c);
}

// Main driver
int main(void){
	// Accessing file, classes.txt
	FILE *input;
	input = fopen("classes.txt", "r");
	char alpha[500];
	char bravo[500];
	fgets(alpha, sizeof(alpha)-1, input);
	fgets(bravo, sizeof(bravo)-1, input);
	
	// Variables to store scanned and separated info
	char *charlie;
	char *delta;
	char *foxtrot;
	int echo;
	
	// String separation and int conversion
	charlie = strtok(alpha,",");
	delta = strtok(NULL,",");
	foxtrot = strtok(NULL, "\n");
	echo = atoi(foxtrot);
	
	// Initialization of course struct and printing call
	course classone = {charlie, delta, echo};
	print(classone);
	
	// Variables to store scanned and separated info
	char *golf;
	char *hotel;
	char *juliett;
	int india;
	
	// String separation and int conversion
	golf = strtok(bravo,",");
	hotel = strtok(NULL,",");
	juliett= strtok(NULL, "\n");
	india = atoi(juliett);
	
	// Initialization of course struct and printing call
	course classtwo = {golf, hotel, india};
	print(classtwo);
	
	return(0);
}