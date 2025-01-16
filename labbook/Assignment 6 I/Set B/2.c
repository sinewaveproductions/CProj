#include <stdio.h>

void add_complex(float real1, float imag1, float real2, float imag2) {
    float sum_real = real1 + real2;
    float sum_imag = imag1 + imag2;

    printf("Sum: %.2f + %.2fi\n", sum_real, sum_imag); 
}

int main() {
    float real1, imag1, real2, imag2;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &real1, &imag1);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &real2, &imag2);

    add_complex(real1, imag1, real2, imag2); 

    return 0;
}