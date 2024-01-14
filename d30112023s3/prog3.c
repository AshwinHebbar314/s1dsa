#include <stdio.h>

int main() {
  int n;
  int sum=0, i;
  printf("Enter an odd number: ");
  scanf("%d", &n);

  if(n % 2 == 0) {
    printf("Enter an odd integer!\n");
  }
  else {
    for(i = 1; i <= n; i++) {
      if(i % 2 != 0)
        sum = sum + i;
      else
        sum = sum - i;
    }

    printf("The sum is: %d\n", sum);
  }
}
