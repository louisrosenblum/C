/* 	Anthony Louis Rosenblum
	Lab 3
	1/31/2018
	This program calculates an average grade and returns to the user an accurate statement regarding their grades.
*/


#include <stdio.h>

//	This function calculates the average grade, from 5 grades
int compute_grade_avg(int a, int b, int c, int d, int e){
	int x  = (a + b + c + d + e)/5;
	return(x);
}

// This function produces the correct output from the original table based on average grade
int write_grade_msg(int x){
	if(x < 60){
		printf("Failed semester - registration suspended");
	}
	else if(60 <= x && x < 70){
		printf("On probation for next semester");
	}
	else if (70 <= x && x < 80){
		printf("");
	}
	else if (80 <= x && x < 90){
		printf("Dean's list for the semester");
	}
	else if (90 <= x && x <= 100){
		printf("Highest honors for the semester");
	}
	return(0);
}

// This function is the drive for the code, it asks the user for 5 grades, and then performs the average and produces the correct output
int main(void){
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("Please enter a grade: ");
	scanf("%d",&a);
	printf("Please enter a grade: ");
	scanf("%d",&b);
	printf("Please enter a grade: ");
	scanf("%d",&c);
	printf("Please enter a grade: ");
	scanf("%d",&d);
	printf("Please enter a grade: ");
	scanf("%d",&e);
	write_grade_msg(compute_grade_avg(a,b,c,d,e));
	
	return(0);
}