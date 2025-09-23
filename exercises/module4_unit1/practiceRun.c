#include <stdio.h>

int main() {
    char char1, char2;
    float floater;
    int wholeNumber;

    printf("Enter two characters, a space, a float, a space, and a decimal:\n");
    scanf("%c%c %g %d", &char1, &char2, &floater, &wholeNumber);
    printf("%c%c\n%.3g\n%d", char1, char2, floater, wholeNumber);
    return 0;
}