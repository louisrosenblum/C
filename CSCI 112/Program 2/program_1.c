#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include masterlist.h

int main(void){
masterlist m1[100];
input = fopen("grocery.txt", "r");

int i = 0;

char *alpha;

while(fgets()!= NULL){
	char *bravo;
	strcpy(bravo, alpha);
	
	char *item = strtok(bravo," ");
	int price = strtok(NULL, " ");
	int lane = strtok(NULL, " ");
	char a = strtok(NULL, "\n");
	
	masterlist charlie = (item,price,lane,a);
	m1[i] = charlie;
	i++;
}

output = fopen("output.bin", "wb");
fwrite(&m1, sizeof(masterlist), i, output);
fclose(output);
return(0);
}