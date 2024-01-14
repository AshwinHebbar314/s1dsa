#include <stdio.h>

int main() {
  int n, prod = 1, i;
  printf("Enter an odd integer: ");
  scanf("%d", &n);
  printf("%d\n", n);

  if(n%2 == 0) {
    printf("Please enter an odd integer!\n");
  }
  else {
    for(i = 1; i <= n; i = i + 2) {
      prod *= i;
    }
    printf("The product of the series is: %d\n", prod);
  }

}
