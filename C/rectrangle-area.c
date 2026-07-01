#include <stdio.h>

int main()
{
    int lenght, width, area;
    printf("Enter the length: ");
    scanf("%d", &lenght);
    printf("Enter the width: ");
    scanf("%d", &width);
    area = lenght*width;
    printf("Area is %d unit sq.", area);

    return 0;
}