#include <stdio.h>
#include <string.h>

struct box
{
    char* color;
    int itemnum, height, width, depth;
    float x,y,z;
};


int main() {
    struct box firstBox;
    firstBox.itemnum = 3;
    strcpy(firstBox.color, "red");
    firstBox.height = 3;
    firstBox.width = 2;
    firstBox.depth = 5;
    firstBox.x = 10.21;
    firstBox.y = 20.62;
    firstBox.z = 35.72;

    printf("\nItem: %d, Color: %s, Position: (%g, %g, %g)\n", firstBox.itemnum, firstBox.color, firstBox.x, firstBox.y, firstBox.z);
    printf("Height: %d, Width: %d, Depth: %d\n", firstBox.height, firstBox.width, firstBox.depth);
}