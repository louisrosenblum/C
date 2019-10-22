#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "masterlist.h"

int main(void){
// Masterlist array	
masterlist m1[100];
FILE *input;
// Opening .txt file
input = fopen("grocery.txt", "r");

int i = 0;

char *alpha;
// Populating master race array from text file
while(fgets(alpha,sizeof(alpha),input)!= NULL){
	char *bravo;
	strcpy(bravo, alpha);
	
	char *item = strtok(bravo," ");
	char *price = strtok(NULL, " ");
	char *lane = strtok(NULL, " ");
	char *a = strtok(NULL, "\n");
	char b = a[0];
	
	int value = atoi(price);
	int runway = atoi(lane);

	
	masterlist charlie = {item,value,runway,b};
	m1[i] = charlie;
	i++;
}
// Writing array to binary file
FILE *output;
output = fopen("output.bin", "wb");
fwrite(&m1, sizeof(masterlist), i, output);
fclose(output);
return(0);
}