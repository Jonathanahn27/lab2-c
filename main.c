// Author: Jonathan Ahn jxa5570@psu.edu
// Collaborator: Dymea Schippers dxs5940@psu.edu
// Collaborator: August Sanderson aes6218@psu.edu
// Collaborator: Ronit Ramnarayan rvr5507@psu.edu
// Collaborator: Nicholas Glaz nsg5204@psu.edu
// Section: 11
// Breakout: 2
#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>

int main(void) {
  double grade = atof(readline("Enter your CMPSC 131 grade: \n"));
  if  (grade >= 93.0) {
  printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (grade >= 90.0) { 
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (grade >= 87.0) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (grade >= 83.0) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (grade >=80.0) {
    printf("Your letter grade for CMSC 1131 is B-.\n");
  }
  else if (grade >=77.0) {
    printf("Your letter grade for CMSC 1131 is C+.\n");
  }
  else if (grade >=70.0) {
    printf("Your letter grade for CMSC 1131 is C.\n");
  }
  else if (grade >=60.0) {
    printf("Your letter grade for CMSC 1131 is D.\n");
  }
  else if (grade <60.0) {
    printf("Your letter grade for CMSC 1131 is F.\n");
  }

return 0;
}