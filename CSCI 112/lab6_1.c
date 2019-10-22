#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * fgets(char *restrict s, int n, FILE *restrict stream);

// Function to determine if a string is a palindrome
int palindrome(char *x){
	int n = sizeof(&x)/sizeof(char);
	int z = 0;
	
	if(n%2 == 0){
		for(int i = 0; i < n/2; i++){
			if(*(x+(i))) == *(x+(n-1-i))){
				z = 1;
			}
			else{
				z = 0;
				printf("%c is not a palindrome\n", x);
				return(z);
			}
	}
	}
	else if(n%2 !=0){
		for(int i = 0; i < (n-1)/2; i++){
			if(*(x+(i))) == *(x+(n-1-i))){
				z = 1;
			}
			else{
				z = 0;
				printf("%c is not a palindrome\n", x);
				return(z);
			}	
	}
	}
	
	if(z == 1){
	printf("%c is a palindrome\n", x);
	}
	return(z);
}
// Function to determine if the first character of a string
char first(char *x){
	printf("%c is the first character\n", *x);
	return(*x);
}
// Function to determine the length of a string
int length(char *x){
	int n = sizeof(&x)/sizeof(char);
	printf("%d is the length\n", n);
	return(n);
}
// Function to determine how many upper case characters a string has
int upper(char *x){
	int a = 0;
	int n = sizeof(&x)/sizeof(char);
	for (int i = 0; i<n; i++){
		if((*(x+(i))) == 'A' || (*(x+(i))) == 'B' || (*(x+(i))) == 'C' || (*(x+(i))) == 'D' || (*(x+(i))) == 'E' || (*(x+(i))) == 'F' || (*(x+(i))) == 'G' || (*(x+(i))) == 'H' || (*(x+(i))) == 'I' || (*(x+(i))) == 'J' || (*(x+(i))) == 'K' || (*(x+(i))) == 'L' || (*(x+(i))) == 'M' || (*(x+(i))) == 'N' || (*(x+(i))) == 'O' || (*(x+(i))) == 'P' || (*(x+(i))) == 'Q' || (*(x+(i))) == 'R' || (*(x+(i))) == 'S' || (*(x+(i))) == 'T' ||(*(x+(i))) == 'U' || (*(x+(i))) == 'V' ||  (*(x+(i))) == 'W' || (*(x+(i))) == 'X' || (*(x+(i))) == 'Y' || (*(x+(i))) == 'Z'){
		a = a + 1;
		}
	}
	printf("There are %d upper case characters\n", a);
	return(a);

}




// Function to determine how many lower case characters a string has
int lower(char *x){
	int a = 0;
	int n = sizeof(&x)/sizeof(char);
	for (int i = 0; i<n; i++){
		if((*(x+(i))) == 'a' || (*(x+(i))) == 'b' || (*(x+(i))) == 'c' || (*(x+(i))) == 'd' || (*(x+(i))) == 'e' || (*(x+(i))) == 'f' || (*(x+(i))) == 'g' || (*(x+(i))) == 'h' || (*(x+(i))) == 'i' || (*(x+(i))) == 'j' || (*(x+(i))) == 'k' || (*(x+(i))) == 'l' || (*(x+(i))) == 'm' || (*(x+(i))) == 'n' || (*(x+(i))) == 'o' || (*(x+(i))) == 'p' || (*(x+(i))) == 'q' || (*(x+(i))) == 'r' || (*(x+(i))) == 's' || (*(x+(i))) == 't' ||(*(x+(i))) == 'u' || (*(x+(i))) == 'v' ||  (*(x+(i))) == 'w' || (*(x+(i))) == 'x' || (*(x+(i))) == 'y' || (*(x+(i))) == 'z'){
		a = a + 1;
		}
		
	}
	printf("There are %d lower case characters\n", a);
	return(a);
}




// Function to determine if a string is a number
int number(char *x){
	int a = 0;
	int n = sizeof(&x)/sizeof(char);
	for (int i =0; i<n; i++){
		if((*(x+(i))) == '0' || (*(x+(i))) == '1' || (*(x+(i))) == '2' || (*(x+(i))) == '3' || (*(x+(i))) == '4' || (*(x+(i))) == '5' || (*(x+(i))) == '6' || (*(x+(i))) == '7' || (*(x+(i))) == '8' || (*(x+(i))) == '9' || (*(x+(i))) == '.'){
				a = 1;
			}
		else{
			a = 0;
			printf("The string is not a number\n");
			return(a);
		}
	}
	if (a == 1){
		printf("The string is a number\n");
	}
	return(a);
}






// Function to determine if a string is a real
int real(char *x){
	int a = 0;
	int n = sizeof(&x)/sizeof(char);
	for (int i= 0; i<n; i++){
		if((*(x+(i))) == '.'){
			a = 1;
		}
		
	}
	if (a == 1){
		printf("The string is a real\n");
	}
	else{
		printf("The string is not a real\n");
	}
	return(a);
}


	
// Main driver
int main(void){
	
	FILE *input;
	input = fopen("input.txt", "r");
	char alpha[500] = {'\0'};
	char bravo[500] = {'\0'};
	//char charlie[500];
	char *charlie = malloc(500);
	//char delta[500];
	char *delta = malloc(500);
	//char echo[500];
	char *echo = malloc(500);
	//char foxtrot[500];
	char *foxtrot = malloc(500);
	
	fgets(alpha, sizeof(alpha)-1 , input);
	fgets(bravo, sizeof(bravo)-1, input);
	
	charlie = strtok(alpha," ");
	palindrome(charlie);
	first(charlie);
	length(charlie);
	upper(charlie);
	lower(charlie);
	delta = strtok(NULL, "\n");
	palindrome(delta);
	first(delta);
	length(delta);
	upper(delta);
	lower(delta);
	
	echo = strtok(bravo," ");
	number(echo);
	real(echo);
	foxtrot = strtok(NULL, "\n");
	number(foxtrot);
	real(foxtrot);
	
	free(charlie);
	free(delta);
	free(echo);
	free(foxtrot);
	return(0);
	
	}
	
	



