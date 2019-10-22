#include <stdio.h>
#include <math.h>

int main(void){
	int get_next(int x, int y){
		double k = pow(2,x-1);
		int w = (k *3) +y;
		return(w);

	}
	
	int print_result(int x){
		printf("The number requested in the sequence is %d", x);
	}
	
	int w = get_next(5,get_next(4,get_next(3,get_next(2,get_next(1,0)))));
	
	print_result(w);
}