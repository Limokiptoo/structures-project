#ifndef FUNCTION_H
#define FUNCTION_H

struct Student {
	char name;
	int age;
	float session;
};
void displayStudent(struct Student *studentArray,int arraysize);
void printStudent(struct Student *studentArray,int arraysize);
#endif