// Author: Woosung Lim wml5207@psu.edu
// Collaborator: Saeed Alshebli saa6016@psu.edu
// Collaborator: Hunter Fristick hjf5143@psu.edu
// Collaborator: Aisan O'connor avo5337@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp = readline("Enter temperature in celsius: ");
  
double fahrenheit = atof(temp);
 fahrenheit = fahrenheit*9/5+32;

  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", atof(temp),fahrenheit);

  return 0;
}