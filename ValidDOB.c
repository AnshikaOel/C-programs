//    VALID FORMAT OF DOB OR NOT  //
#include <stdio.h>

int main()
{
    int date,month ,year;
    printf("Enter the DOB (in numeric form) \n");
    printf("Enter the date : ");
    scanf("%d",&date);
    printf("Enter the month : ");
    scanf("%d",&month);
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year>=1999 &&  year<=2022)
    {
        if(month>=1 && month <=12)
        {
            if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            {
                if(date>=1 && date<=31)
                {
                    printf("Valid DOB");
                }
                else
                {
                    printf("Invalid date");
                }
            }
            else if(month==4||month==6||month==9||month==11)
            {
                if(date>=1 && date<=30)
                {
                    printf("Valid DOB");
                }
                else
                {
                    printf("Invalid date");
                }
            }
            else
            {
                if(year%4==0)
                {
                    if(date>=1 && date <=29)
                    {
                        printf("Valid DOB");
                    }
                    else
                    {
                        printf("Invalid date");
                    }
                }
                else
                {
                    if(date>=1 && date <=28)
                    {
                        printf("Valid DOB");
                    }
                    else
                    {
                        printf("Invalid date");
                    }
                }
            }
        }
        else
        {
            printf("Invalid Month");
        }
    }
    else
    {
        printf("Invalid Year");
    }
    return 0;
}
