#include <stdio.h> 

float cube_volume(float);

float sum;

int main(void) 
{ 
    float volume = cube_volume(4); 
    printf("Sum=%f\n", sum); 
    printf("Volume=%f\n", volume); 
} 

float cube_volume(float side) {
    sum = side * 12;
    return side * side * side;
}