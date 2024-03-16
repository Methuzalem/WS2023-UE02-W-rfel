#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sideCube = 0;
    int surfaceArea = 0;
    int volume = 0;

    printf("Please insert the side length of the Cube: ");
    scanf("%d", &sideCube);

    surfaceArea = sideCube*sideCube*6;
    volume = sideCube*sideCube*sideCube;

    printf("Surface area: %d\n", surfaceArea);
    printf("Volume: %d", volume);

    return 0;
}
