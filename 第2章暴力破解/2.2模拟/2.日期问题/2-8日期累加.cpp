#include<iostream>

using namespace std;
int days[2][13]=
{
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool isLeapYear(int year)
{
    return (year%400==0||(year%4==0&&year%100!=0));
}
int daysofyear(int year)
{
    if(isLeapYear(year))
    {
        return 366;
    }
    else
    {
        return 365;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int year,month,day,add;
        scanf("%d %d %d %d",&year,&month,&day,&add);
        int leap=isLeapYear(year);
        for(int i=1; i<month; i++)
        {
            add+=days[leap][i];
        }
        add+=day;
        while(add>daysofyear(year))
        {
            add-=daysofyear(year);
        while(days>dayOfYear(year)){
            year++;
        }
        leap=isLeapYear(year);
        month=0;
        while(add>days[leap][month])
        {
            add-=days[leap][month];
            month++;
        }
        printf("%04d-%02d-%02d\n",year,month,add);
    }

    return 0;
}
