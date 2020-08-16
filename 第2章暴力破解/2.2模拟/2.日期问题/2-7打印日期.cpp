#include<iostream>
using namespace std;
int daytab[2][13]= {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
//ÅÐ¶ÏÊÇ·ñÈòÄê
bool isLeapYear(int year) {
    return (year%400==0||(year%4==0&&year%100!=0));
}

int main() {
    int year,days;
    while(scanf("%d %d",&year,&days)!=EOF) {
        int row=isLeapYear(year);
        int day=days,month=1;
        while(day>daytab[row][month]) {
            day-=daytab[row][month];
            month++;
        }
        printf("%04d-%02d-%02d\n",year,month,day);
    }
    return 0;
}
