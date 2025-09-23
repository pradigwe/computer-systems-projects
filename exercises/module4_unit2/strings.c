#include <stdio.h>

int main() {
    char school[] = "UNC Charlotte";
    size_t schoolSize = sizeof(school);

    for(int i=0; i < schoolSize; i++) {
        printf("%c\n", school[i]);
    }
}