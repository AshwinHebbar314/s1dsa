#include <stdio.h>

int main () {
 
  double sum = 0, n, i;

  printf("Enter a positive number: ");
  scanf("%lf", &n);

  if(n < 1) {
    printf("Enter a positive Integer!\n");
  }
  else {
    for(i = 1; i <= n; i++) {
      sum = sum + (1/i);
    }

    printf("The sum is: %lf\n", sum);
  }
}
