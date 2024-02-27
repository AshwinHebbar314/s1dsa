#include <stdio.h>
// Illustrating the use of functions
void print_fraction(struct fraction);
struct fraction {
    int numerator;
    int denominator;
};

int main() {
    struct fraction fract;
    printf("\n\nEnter a fraction - numerator followed by denominator as two integers.\n\n");
    printf("Numerator: ");
    scanf("%d",&fract.numerator);
    printf("\n\nDenominator: ");
    scanf("%d",&fract.denominator);
    printf("\n\tThe fraction is %d/%d.\n\n",fract.numerator,fract.denominator);
}

void print_fraction(struct fraction fract) {
    // To do
}
