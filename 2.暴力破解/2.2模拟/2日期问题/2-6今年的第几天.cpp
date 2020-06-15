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
int main()
{
    int year,month,day;
    while(scanf("%d %d %d",&year,&month,&day)!=EOF)
    {
        int daytotal=0;
        int leap=0;
        if(isLeapYear(year))leap=1;
        for(int i=1; i<month; i++)
        {
            daytotal=daytotal+days[leap][i];
        }
        daytotal=daytotal+day;
        printf("%d\n",daytotal);
    }
    return 0;
}
