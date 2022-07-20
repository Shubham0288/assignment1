//  WAP to take date as input in given format and cnvert the date format and display  the result as given below
/* User input date format-"DD/MM/YY"(27/11/2022)
   Output format -
   "DAY -DD , Month -MM ,Year-YYYY"(Day-27,Month-07,Year-2002)*/
   #include<stdio.h>
   int main()
   {
       int DD,MM,YYYY;
       printf("Enter the date in the format of  \"DD/MM/YYYY :");
       scanf("%d %d %d",&DD,&MM,&YYYY);
       printf("Date foemat is %d\\%d\\%d \n",DD,MM,YYYY);
       printf("Day-%d,Month-%d,Year-%d",DD,MM,YYYY);
       return 0;
   } 