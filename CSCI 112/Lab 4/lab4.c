/* 	Anthony Louis Rosenblum
	Lab 4
	1/31/2018
	This program calculates an average grade and returns to the user an accurate statement regarding their grades.
*/


#include <stdio.h>

//	This function calculates the average grade, from an array of 5 grades
int compute_grade_avg(int a[]){
	int x  = (a[0] + a[1] + a[2] + a[3] + a[3])/5;
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
	int a[5];
	printf("Please enter a grade: ");
	scanf("%d",&a[0]);
	printf("Please enter a grade: ");
	scanf("%d",&a[1]);
	printf("Please enter a grade: ");
	scanf("%d",&a[2]);
	printf("Please enter a grade: ");
	scanf("%d",&a[3]);
	printf("Please enter a grade: ");
	scanf("%d",&a[4]);
	write_grade_msg(compute_grade_avg(a));
	
	return(0);
}