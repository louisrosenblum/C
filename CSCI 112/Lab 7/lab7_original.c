#include <stdio.h>

typedef course{
	char *name;
	char *id;
	int credits;
	
}course_t;

void print(course x){
	char *a = x.name;
	char *b = x.id;
	int c = x.credits;
	printf("Class ID-%s,Name-%s, Credits-%d", *a, *b, c);
}


int main(void){
	FILE *input;
	input = fopen("classes.txt", "r");
	char *alpha;
	char *bravo;
	fgets(alpha, sizeof(alpha)-1, input);
	fgets(bravo, sizeof(bravo)-1, input);
	
	char *charlie;
	char *delta;
	char *foxtrot;
	int echo;
	
	charlie = strtok(alpha,",");
	delta = strtok(NULL,",");
	foxtrot = strtok(NULL, "\n");
	echo = atoi(foxtrot);
	
	course classone = course_t(charlie, delta, echo);
	print(classone);
	
	char *golf;
	char *hotel;
	char *juliett;
	int india;
	
	golf = strtok(bravo,",");
	hotel = strtok(NULL,",");
	juliett= strtok(NULL, "\n");
	india = atoi(juliett);
	
	course classtwo = course_t(golf, hotel, india);
	print(classtwo);
	
	return(0);
}