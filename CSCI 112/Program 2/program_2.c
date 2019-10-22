#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "masterlist.h"

int main(void){
	masterlist dude[];
	input = fopen("output.bin","rb");
	int number_of_items = fread(dude,sizeof(dude), sizeof(dude[0]),input);
	
	fclose(input);
	
	char option = 'p';
	
	masterlist * addtomasterlist(masterlist a[], masterlist b, int c){
		masterlist[] d[c+1];
		for(int i = 0; i<c; c++){
			d[i] = a[i];
		}
		d[c+1] = b;
		
		return(&d);
	}
	
	void print(masterlist a[], char b, int c){
		int x = 0;
		for(int i =0; i < c; i++){
			
			if a[i].category == b{
				x++;
				
			}
			printf("There are %d items in selected category", x);
		}
		
	}
	
	void print_list(masterlist a[], int c){
		for(int i =0; i<c; i++){
			printf("%s , $%d, aisle %d, category %c", a[i].name,a[i].price,a[i].aisle, a[i].category);
		}
		
	}
	
	
	void UserInterface(masterlist a[], int c){
		while(option != 'x' && option != 'X'){
			number_of_items = c;
			printf("Please enter A, N, L, or X");
			scanf("%c", option);
			if (option == 'a' || option == 'A'){
				char *name;
				int price;
				int aisle;
				char category;
				printf("Please enter item name");
				scanf("%s", name);
				printf("Please enter item price");
				scanf("%d", price);
				printf("Please enter item aisle");
				scanf("%d", aisle);
				printf("Please enter item category");
				char("%c", category);
				
				masterlist alpha = {name, price, aisle, category};
				*a = addtomasterlist(a, alpha, number_of_items);
				number_of_items = number_of_items - 1;
				
			}
			else if (option == 'n' || option == 'N'){
				printf("Please enter a category");
				char category;
				scanf("%c", category);
				print(a, category, number_of_items);
				
			}
			else if (option == 'l' || option == 'L'){
				print_list(a, number_of_items);
			}
			
			else{
				printf("Invalid entry");
			}
		}
		
		
	}
	
	UserInterface(dude, number_of_items);
	
	return(0);
}