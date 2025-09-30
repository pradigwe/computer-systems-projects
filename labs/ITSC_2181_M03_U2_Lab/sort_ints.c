#include <stdio.h>

int main() {
    int numArray[10]; 
    printf("Please enter 10 integers seperated by a space:\n");

    for(int i=0; i<10; i++) {
        scanf("%d", &numArray[i]);
    }

    int temp = 0;
    for(int i=0; i<10; i++) {
        for(int j=i+1; j<10; j++) {
            if(numArray[i] > numArray[j]) {
                temp = numArray[i];
                numArray[i] = numArray[j];
                numArray[j] = temp;
            }
        }
    }

    printf("\nThe list after sorting: ");
    for(int i=0; i<10; i++){
        printf("%d ", numArray[i]);
    }
}