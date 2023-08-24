#include <stdio.h>

int main() {
  // Define the variables.
  float a;
  char grade;

  // Get the marks from the user.
  printf("Enter the marks: ");
  scanf("%f", &a);

  // Check the marks. 
  if (a >= 90) {
    grade = 'A';
  } else if (a >= 80) {
    grade = 'B';
  } else if (a >= 70) {
    grade = 'C';
  } else if (a >= 60) {
    grade = 'D';
  } else {
    grade = 'F';
  }

  // Displaying the grade.
  printf("The grade is %c.\n", grade);

  return 0;
}
