#include <stdio.h>

int compute_grade_avg(int a, int b, int c, int d, int e){
	int x  = (a + b + c + d + e)/5;
	return(x);
}

int write_grade_msg(int x){
	if(x < 60){
		printf("Failed semester – registration suspended");
	}
	else if(60 < x < 70){
		printf("On probation for next semester");
	}
	else if (70 < x < 80){
		printf("");
	}
	else if (80 < x < 90){
		printf("Dean’s list for the semester");
	}
	else if (90 < x <= 100){
		printf("Highest honors for the semester");
	}
	return(0);
}


int main(void){
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("Please enter 5 grades, one on each line: ");
	scanf("%d",a);
	scanf("%d",b);
	scanf("%d",c);
	scanf("%d",d);
	scanf("%d",e);
	write_grade_msg(compute_grade_avg(a,b,c,d,e));
	
	return(0);
}