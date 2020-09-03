# m-s_c_programs
// c program to find the age of a person
#include<stdio.h>
void main()
{
    int usr_year, cur_yr, temp;
    printf("Enter last two digits of your birth year:\t");
    scanf("%d",&usr_year);
    printf("Enter last two digits of current year: ");
    scanf("%d", &cur_yr);
    if(usr_year > cur_yr)
    {
        temp = 100 - usr_year + cur_yr;
        printf("Your Age is %d years", temp);
    }
    else if(usr_year < cur_yr)
    {
        temp = cur_yr - usr_year;
        printf("Your Age is %d years", temp);
    }
    else if(cur_yr ==00 && usr_year == 00)
    {
        printf("Your age is less than a year or greater tha a century");
        //For example if the user is born in year 1900 or 2000 and current year is 2000
    }
    else
    {
        printf("please enter a valid year");
    }
    
}
