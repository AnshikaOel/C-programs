// FINDING AREA OF AREA AND CIRCUMFERENCE  //
#include <stdio.h>
#define pi 3.14
int main()
{
    int r,ar,cir;
    printf("Enter the radius of circle : ");
    scanf("%d",&r);
    ar=pi*r*r;
    cir=2*pi*r;
    printf("area of circle is %d",ar);
    printf("\nCircumferance of circle is %d",cir);

    return 0;
}
