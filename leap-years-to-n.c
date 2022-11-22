#include <stdio.h>
int LeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
 
int main()
{
    int i,n;
    printf("Enter the value of n:  ");
    scanf("%d",&n);
 
    printf("Leap years from 1 to %d: \n",n);
    for(i=1;i<=n;i++)
    {
        if(LeapYear(i))
            printf("%d\t",i);
    }
     
    return 0;
}
