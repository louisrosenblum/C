#include <stdio.h>
char * fgets(char *restrict s, int n, FILE *restrict stream);

int palindrome(char x[]){
	int n = sizeof(&x)/sizeof(char);
	int z = 0;
	
	if(n%2 == 0){
		for(int i = 0; i < n/2; i++){
			if(x[i] == x[n-1-i]){
				z = 1;
			}
			else{
				z = 0;
				return(z);
			}
	}
	}
	else if(n%2 !=0){
		for(int i = 0; i < (n-1)/2; i++){
			if(x[i] == x[n-1-i]){
				z = 1;
			}
			else{
				z = 0;
				return(z);
			}	
	}
	}
	
	
	return(z);
}

char first(char x[]){
	return(x[0]);
}

int length(char x[]){
	int n = sizeof(&x)/sizeof(char);
	return(n);
}

int upper(char x[]){
	int a = 0;
	int n = sizeof(&x)/sizeof(char);
	(for int i = 0; i<n; i++){
		if(x[i] == "A" || x[i] == "B" || x[i] == "C" || x[i] == "D" || x[i] == "E" || x[i] == "F" || x[i] == "G" || x[i] == "H" || x[i] == "I" || x[i] == "J" || x[i] == "K" || x[i] == "L" || x[i] == "M" || x[i] == "N" || x[i] == "O" || x[i] == "P" || x[i] == "Q" || x[i] == "R" || x[i] == "S" || x[i] == "T" ||x[i] == "U" || x[i] == "V" ||  x[i] == "W" || x[i] == "X" || x[i] == "Y" || x[i] == "Z"){
		a = a + 1;
		}
	}
	
	return(a);
	
}

int lower(char x[]){
	int a = 0;
	int n = sizeof(&x)/sizeof(char);
	(for int i = 0; i<n; i++){
		if(x[i] == "a" || x[i] == "b" || x[i] == "c" || x[i] == "d" || x[i] == "e" || x[i] == "f" || x[i] == "g" || x[i] == "h" || x[i] == "i" || x[i] == "j" || x[i] == "k" || x[i] == "l" || x[i] == "m" || x[i] == "n" || x[i] == "o" || x[i] == "p" || x[i] == "q" || x[i] == "r" || x[i] == "s" || x[i] == "t" ||x[i] == "u" || x[i] == "v" ||  x[i] == "w" || x[i] == "x" || x[i] == "y" || x[i] == "z"){
		a = a + 1;
		}
		
	}
	
	return(a);
}

int number(char x[]){
	a = 0;
	int n = sizeof(&x)/sizeof(char);
	for (int i =0; i<n; i++){
		if(x[i] == "0" || x[i] == "1" || x[i] == "2" || x[i] == "3" || x[i] == "4" || x[i] == "5" || x[i] == "6" || x[i] == "7" || x[i] == "8" || x[i] == "9" || x[i] == "."){
				a = 1;
	}
	else{
		a = 0;
		return(a);
	}
	}
	
}

int real(char x[]){
	a = 0;
	int n = sizeof(&x)/sizeof(char);
	for (int i= 0; i<n; i++){
		if(x[i] == "."){
			a = 1;
		}
		
	}
	return(a);

int main(void){
	
	FILE *input;
	input = fopen("hi.txt", "r");
	char sexy[];
	
	printf("%d", y);
	return(0);
	
	}
	
	
