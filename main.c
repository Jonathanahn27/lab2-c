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
  double grade = atof(readline("Enter your grade for CMPSC 131: "));
  if  (grade >= 93.0) {
  printf("Your letter grade for CMPSC 131 is A.");
  }
  else if (grade >= 90) { 
    printf("Your letter grade for CMPSC 131 is A-.");
  }


return 0;
}
