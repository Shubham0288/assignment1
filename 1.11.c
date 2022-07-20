/* WAP to take time as input in given format and convert the time format  and display the result in given below.
User input date format - "HH:MM"
Output format - "HH hour and MM Minute"*/
#include<stdio.h>  
int main()
{
    int HH,MM;
    printf("Enter the hour and minute in the format of \"HH:MM\"");
    scanf("%d%d",&HH,&MM);
    printf("Time format is %d:%d\n",HH,MM);
    printf("\"%d hour and %d Minute\"",HH,MM);
    return 0;
}