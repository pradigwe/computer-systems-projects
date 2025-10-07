#include <stdio.h>
#include <string.h>

struct box
{
    char* color;
    int itemnum, height, width, depth;
    float x,y,z;
};

int main() {
    struct box boxArray[100];

    struct box b0 = {"yellow", 0, 4, 5, 6, 0.00, 19.45, 9.34};
    struct box b1 = {"blue", 1, 2, 9, 4, 14.23, 18.34, 5.32};

    boxArray[0] = b0;
    boxArray[1] = b1;
}