#include<iostream>
using namespace std;

//月份对应天数
int daytab[2][13]= {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
//判断是否闰年
bool isLeapYear(int year) {
    return (year%400==0||(year%4==0&&year%100!=0));
}

int main() {
    int caseNumber,year,month,day;
    scanf("%d",&caseNumber);
    while(caseNumber--) {
        scanf("%d %d %d",&year,&month,&day);
        int isleap=isLeapYear(year);
        if(day+1>daytab[isleap][month]) {
            day=1;
            if(month+1>12) {
                month=1;
                year++;
            } else {
                month++;
            }
        } else {
            day++;
        }
        printf("%04d-%02d-%02d\n",year,month,day);

    }
    return 0;
}
