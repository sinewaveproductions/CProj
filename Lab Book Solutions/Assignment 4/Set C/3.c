#include <stdio.h>

int main() {
    char ch;
    int alphaCount = 0, digitCount = 0;

    printf("Enter characters (enter '#' to stop):\n");

    while ((ch = getchar()) != '#') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphaCount++;
        } else if (ch >= '0' && ch <= '9') {
            digitCount++;
        }
    }

    printf("\nTotal alphabets: %d\n", alphaCount);
    printf("Total digits: %d\n", digitCount);

    return 0;
}