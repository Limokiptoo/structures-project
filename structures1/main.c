#include <stdio.h>
#include "functions.h"

int main() 
{
    int arraysize = 10;
    struct Student studentArray[arraysize];
  displayStudent(studentArray, arraysize);
    printStudent(studentArray, arraysize);
    return 0;
}
