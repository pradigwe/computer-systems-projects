#include <stdio.h>

int main() {
    // for loop
    printf("For loop, numbers 0-9\n");
    for(int i=0; i<10; i++) {
        printf("x=%d\n", i);
    }


    // while loop
    printf("\nWhile loop, numbers 0-7\n");
    int x = 0;
    while(x < 8) {
        printf("%d\n", x);
        x++;
    }


    // do-while loop
    printf("\nDo-while loop, numbers 0-5\n");
    x = 0;
    do {
        printf("%d\n", x);
        x++;
    } while (x < 6);
}