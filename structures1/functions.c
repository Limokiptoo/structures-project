#include <stdio.h>
#include "functions.h"

void displayStudent(struct Student *studentArray,int arraysize)
{
	for(int i=0;i<arraysize;i++){
		printf("enter student %d details:\n",i+1 );
		printf("name:");
		scanf("%s",&studentArray[i].name);
		printf("age:");
		scanf("%d",&studentArray[i].age);
		printf("session:");
		scanf("%f",&studentArray[i].session);
	}
}
void printStudent(struct Student *studentArray,int arraysize){
	printf("\nstudentdetails:");
	for(int i=0;i<arraysize;i++){
		printf("student %d:\n",i+1 );
		printf("name:%c\n",studentArray[i].name);
		printf("name:%d\n",studentArray[i].age);
		printf("name:%f\n",studentArray[i].session);
	}

}