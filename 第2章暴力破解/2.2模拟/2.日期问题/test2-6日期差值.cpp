#include<iostream>
using namespace std;
int daytab[2][13]= {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
//判断是否闰年
bool isLeapYear(int year) {
    return (year%400==0||(year%4==0&&year%100!=0));
}
//某一年有多少天
int dayOfYear(int year) {
    if(isLeapYear(year)) {
        return 366;
    }
    return 365;
}
//某年的某天是今年的第几天
int daysOfYear(int year,int month,int day) {
    int row=isLeapYear(year);
    int days=0;
    for(int i=1; i<month; i++) {
        days+=daytab[row][i];
    }
    days+=day;
    return days;
}

int main() {
    int m,n;
    while(scanf("%d",&m)!=EOF) {
        scanf("%d",&n);
        int year1=m/10000,year2=n/10000,days=0;
        //第一个日期是其年的第几天
        int days1=daysOfYear(year1,m/100%100,m%100);
        //第二个日期是其年的第几天
        int days2=daysOfYear(year2,n/100%100,n%100);
        for(int i=year1; i<year2; i++) {//计算年与年之间的天数
            days+=dayOfYear(i);
        }
        printf("%d",days2-days1+1+days);
    }
    return 0;
}
