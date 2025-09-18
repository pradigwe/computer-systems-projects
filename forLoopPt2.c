#include <stdio.h>

int main() {
    // The first 20 even numbers
    printf("The first 20 even numbers:\n");
    for(int i=0; i<41; i++) {
        if(i % 2 == 0 && i!= 0){
            printf("%d\n", i);
        }
    }

    // The odd numbers between 50 and 20, in descending order
    printf("\nThe odd numbers between 5 and 20, in descending order: \n");
    for(int i=50; i>20; i--){
        if(i % 2 == 1){
            printf("%d\n", i);
        }
    }
}