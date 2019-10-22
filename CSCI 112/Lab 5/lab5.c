#include <stdio.h>

// Main driver function
int main(void){
	// Char to temporarily hold user input
	char x = '1';
	// Char to compare to incase user enters 0
	char z = '0';
	// Int to track number of characters entered
	int k = 0;
	// Array to store characters
	char w[10000] = {0};
	printf("Please enter your inputs: ");
	// While loop to retrieve char input from user
	while(x != z){
		scanf("%c", &x);
		w[k] = x;
		k = k + 1;
	}
	
	// Int to adjust to measure array size
	int echo = (k-1)/2;
	// Array to store sorted characters
	char alpha[echo];
	// Int to keep track of array position
	int bravo = 0;
	
	// Giant dictionary used to fill the array with chars sorted from Z to A
	while(bravo <k){
		for(int i = 0; i<k; i++){
		if(w[i] == 'z'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'y'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'x'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'w'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'v'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'u'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 't'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 's'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'r'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'q'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'p'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'o'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'n'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'm'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'l'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'k'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'j'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'i'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'h'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'g'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'f'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'e'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'd'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'c'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'b'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
		for(int i = 0; i<k; i++){
		if(w[i] == 'a'){
			alpha[bravo] = w[i];
			bravo = bravo + 1;
		}}
	
	// Loop to print the sorted array back to the user
	printf("%c", alpha[0]);
	for(int i = 1; i<echo ; i++){
		if(alpha[i] != 0){
		printf(", %c", alpha[i]);
		}
		if(i == (echo-1)){
			printf(", %c\n", alpha[i]);
		}
	}
	
	return(0);

}}