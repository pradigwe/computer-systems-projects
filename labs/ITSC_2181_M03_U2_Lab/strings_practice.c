#include <stdio.h>
#include <ctype.h>

void capitalize (char word[]) {
    for(int i=0; word[i] != '\0'; i++) {
        if(isalpha(word[i])){
            word[i] = toupper(word[i]);
        }
    }
}

int main() {

    char the_str[] = "test";
    capitalize(the_str);

    printf("%s\n", the_str);

    char the_str2[] = "This IS a tesT!";
    
    capitalize(the_str2);
    printf("%s\n", the_str2);

    char the_str3[] = "TESTING ONE MORE time. ";
    
    capitalize(the_str3);
    printf("%s\n", the_str3);
}