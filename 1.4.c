/* TO FIND THE AREA OFF THE CIRCLE. TAKE RADIUS OF CIRCLE FROM THE USER AS INPUT ANND THE PRINT THE RESULT IN GIVEN BELOW FORMAT
"Area pf the circle A  having radius  R", Replace AA with Area and R with Rdius */
#include<stdio.h>
int main()
{
    float A,R;
    printf("Enter the radius of the circle\n");
    scanf("%f",&R);
    A=3.14*R*R;
    printf("Area of the circle is %f having radius %f",A,R);
    return 0;
}