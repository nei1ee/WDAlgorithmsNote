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
    int year,daytotal;
    while(scanf("%d %d",&year,&daytotal)!=EOF)
    {
        int leap=isLeapYear(year);
        int month=0;
        while(daytotal>days[leap][month]){
            daytotal-=days[leap][month];
            month++;
        }
        printf("%04d-%02d-%02d\n",year,month,daytotal);
    }
    return 0;
}
