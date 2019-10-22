#include <stdio.h>

int main(void) {
	int get_input(void){
		int y;
		printf("Please enter an integer: ");
		scanf("%d", &y);
		return(y);
	}
	int get_next(int x,int y){
		int w;
		int n = (y - x - 1)/3;
		w = ((1<<(n+1))*3) + (n+2);
		return(w);
	}
	int print_result(int x){
		printf("The result is %d", x);
		return(0);
	}
	int k = get_input();
	int q = get_input();
	int w = get_next(k,q);
	print_result(w);
	
	
	return(0);
}