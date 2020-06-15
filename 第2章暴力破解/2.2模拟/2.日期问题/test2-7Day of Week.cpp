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

int numberOfyear(int year)
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

int daysofyear(int year,int month,int day)
{
    int leap=isLeapYear(year);
    int sumdays=0;
    for(int i=1; i<month; i++)
    {
        sumdays+=days[leap][i];
    }
    sumdays+=day;
    return sumdays;
}

int main()
{
    int m,n;
    while(scanf("%d",&m)!=EOF){
        scanf("%d",&n);
        int y1=m/10000;
        int y2=n/10000;
        int sum=0;
        int days1=daysofyear(y1,m/100%100,m%100);
        int days2=daysofyear(y2,n/100%100,n%100);
        for(int i=y1;i<y2;i++){
            sum+=numberOfyear(i);
        }
        printf("%d",days2-days1+sum+1);
    }
    return 0;
}
