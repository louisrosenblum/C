#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * fgets(char *restrict s, int n, FILE *restrict stream);

// Function to determine if a string is a palindrome
int palindrome(char *x){
	int n = 0;
	for(int i = 0; i < 500 && (*(((char*)x+(i)))) != '\0'; i++){
		n = i + 1;
	}
	int z = 0;
	
	if(n%2 == 0){
		for(int i = 0; i < n/2; i++){
			if(*(((char*)x)+(i)) == *(((char*)x)+(n-1-i))){
				z = 1;
			}
			else{
				z = 0;
				printf("%s is not a palindrome\n", x);
				return(z);
			}
	}
	}
	else if(n%2 !=0){
		for(int i = 0; i < (n-1)/2; i++){
			if(*(((char*)x)+(i)) == *(((char*)x)+(n-1-i))){
				z = 1;
			}
			else{
				z = 0;
				printf("%s is not a palindrome\n", x);
				return(z);
			}	
	}
	}
	
	if(z == 1){
	printf("%s is a palindrome\n", x);
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
	int n = 0;
	for(int i = 0; i < 500 && (*(((char*)x+(i)))) != '\0'; i++){
		n = i + 1;
	}
	printf("%d is the length\n", n);
	return(n);
}
// Function to determine how many upper case characters a string has
int upper(char *x){
	int a = 0;
		int n = 0;
	for(int i = 0; i < 500 && (*(((char*)x+(i)))) != '\0'; i++){
		n = i + 1;
	}
	for (int i = 0; i<n; i++){
		if((*(((char*)x)+(i))) == 'A' || (*(((char*)x)+(i))) == 'B' || (*(((char*)x)+(i))) == 'C' || (*(((char*)x)+(i))) == 'D' || (*(((char*)x)+(i))) == 'E' || (*(((char*)x)+(i))) == 'F' || (*(((char*)x)+(i))) == 'G' || (*(((char*)x)+(i))) == 'H' || (*(((char*)x)+(i))) == 'I' || (*(((char*)x)+(i))) == 'J' || (*(((char*)x)+(i))) == 'K' || (*(((char*)x)+(i))) == 'L' || (*(((char*)x)+(i))) == 'M' || (*(((char*)x)+(i))) == 'N' || (*(((char*)x)+(i))) == 'O' || (*(((char*)x)+(i))) == 'P' || (*(((char*)x)+(i))) == 'Q' || (*(((char*)x)+(i))) == 'R' || (*(((char*)x)+(i))) == 'S' || (*(((char*)x)+(i))) == 'T' ||(*(((char*)x)+(i))) == 'U' || (*(((char*)x)+(i))) == 'V' ||  (*(((char*)x)+(i))) == 'W' || (*(((char*)x)+(i))) == 'X' || (*(((char*)x)+(i))) == 'Y' || (*(((char*)x)+(i))) == 'Z'){
		a = a + 1;
		}
	}
	printf("There are %d upper case characters\n", a);
	return(a);

}




// Function to determine how many lower case characters a string has
int lower(char *x){
	int a = 0;
		int n = 0;
	for(int i = 0; i < 500 && (*(((char*)x+(i)))) != '\0'; i++){
		n = i + 1;
	}
	for (int i = 0; i<n; i++){
		if((*(((char*)x)+(i))) == 'a' || (*(((char*)x)+(i))) == 'b' || (*(((char*)x)+(i))) == 'c' || (*(((char*)x)+(i))) == 'd' || (*(((char*)x)+(i))) == 'e' || (*(((char*)x)+(i))) == 'f' || (*(((char*)x)+(i))) == 'g' || (*(((char*)x)+(i))) == 'h' || (*(((char*)x)+(i))) == 'i' || (*(((char*)x)+(i))) == 'j' || (*(((char*)x)+(i))) == 'k' || (*(((char*)x)+(i))) == 'l' || (*(((char*)x)+(i))) == 'm' || (*(((char*)x)+(i))) == 'n' || (*(((char*)x)+(i))) == 'o' || (*(((char*)x)+(i))) == 'p' || (*(((char*)x)+(i))) == 'q' || (*(((char*)x)+(i))) == 'r' || (*(((char*)x)+(i))) == 's' || (*(((char*)x)+(i))) == 't' ||(*(((char*)x)+(i))) == 'u' || (*(((char*)x)+(i))) == 'v' ||  (*(((char*)x)+(i))) == 'w' || (*(((char*)x)+(i))) == 'x' || (*(((char*)x)+(i))) == 'y' || (*(((char*)x)+(i))) == 'z'){
		a = a + 1;
		}
		
	}
	printf("There are %d lower case characters\n", a);
	return(a);
}




// Function to determine if a string is a number
int number(char *x){
	int a = 0;
	int n = 0;
	for(int i = 0; i < 500 && (*(((char*)x+(i)))) != '\0'; i++){
		n = i + 1;
	}
	for (int i =0; i<n; i++){
		if((*(((char*)x)+(i))) == '0' || (*(((char*)x)+(i))) == '1' || (*(((char*)x)+(i))) == '2' || (*(((char*)x)+(i))) == '3' || (*(((char*)x)+(i))) == '4' || (*(((char*)x)+(i))) == '5' || (*(((char*)x)+(i))) == '6' || (*(((char*)x)+(i))) == '7' || (*(((char*)x)+(i))) == '8' || (*(((char*)x)+(i))) == '9' || (*(((char*)x)+(i))) == '.'){
				a = 1;
			}
		else{
			a = 0;
			printf("%s is not a number\n", x);
			return(a);
		}
	}
	if (a == 1){
		printf("%s is a number\n",x);
	}
	return(a);
}






// Function to determine if a string is a real
int real(char *x){
	int a = 0;
	int n = 0;
	for(int i = 0; i < 500 && (*(((char*)x+(i)))) != '\0'; i++){
		n = i + 1;
	}
	for (int i= 0; i<n; i++){
		if((*(((char*)x)+(i))) == '.'){
			a = 1;
		}
		
	}
	if (a == 1){
		printf("%s is a real\n", x);
	}
	else{
		printf("%s is not a real\n", x);
	}
	return(a);
}


	
// Main driver
int main(void){
	
	FILE *input;
	input = fopen("strings.txt", "r");
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
	char *bob = malloc(500);
	char *joe = malloc(500);
	char *jim = malloc(500);
	char *jimbo = malloc(500);
	
	fgets(alpha, sizeof(alpha)-1 , input);
	fgets(bravo, sizeof(bravo)-1, input);
	
	charlie = strtok(alpha," ");
	palindrome(charlie);
	first(charlie);
	length(charlie);
	upper(charlie);
	lower(charlie);
	delta = strtok(NULL, " ");
	palindrome(delta);
	first(delta);
	length(delta);
	upper(delta);
	lower(delta);
	bob = strtok(NULL, " ");
	palindrome(bob);
	first(bob);
	length(bob);
	upper(bob);
	lower(bob);
	joe = strtok(NULL, " ");
	palindrome(joe);
	first(joe);
	length(joe);
	upper(joe);
	lower(joe);
	jim = strtok(NULL, "\n");
	palindrome(jim);
	first(jim);
	length(jim);
	upper(jim);
	lower(jim);
	
	echo = strtok(bravo," ");
	number(echo);
	real(echo);
	foxtrot = strtok(NULL, " ");
	number(foxtrot);
	real(foxtrot);
	jimbo = strtok(NULL, "\n");
	number(jimbo);
	real(jimbo);
	
	free(charlie);
	free(delta);
	free(echo);
	free(foxtrot);
	free(bob);
	free(joe);
	free(jim);
	free(jimbo);
	return(0);
	
	}
	
	




