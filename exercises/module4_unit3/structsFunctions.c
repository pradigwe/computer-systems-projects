#include <stdio.h>
#include <string.h>

struct box
{
    char* color;
    int itemnum, height, width, depth;
    float x,y,z;
};

float volume (float height, float width, float depth) {
    return height * width * depth;
}

struct box compareBoxes (struct box boxOne, struct box boxTwo) {
    float boxOneVolume = volume(boxOne.height, boxOne.width, boxOne.depth);
    float boxTwoVolume = volume(boxTwo.height, boxTwo.width, boxTwo.depth);

    if( boxOneVolume > boxTwoVolume ) {
        boxOne.x = 0;
        boxOne.y = 0;
        boxOne.z = 0;

        strcpy(boxOne.color, "green");
        return boxOne;
    } else if (boxOneVolume < boxTwoVolume || boxOneVolume == boxTwoVolume) {
        boxTwo.x = 0;
        boxTwo.y = 0;
        boxTwo.z = 0;

        strcpy(boxTwo.color, "green");
        return boxTwo;
    }
}

int main() {

}