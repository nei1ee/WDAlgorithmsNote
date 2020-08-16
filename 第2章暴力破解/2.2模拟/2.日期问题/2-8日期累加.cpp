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

int main() {
    int caseNumber;
    scanf("%d",&caseNumber);
    while(caseNumber--) {
        int year,month,day,days;
        scanf("%d%d%d%d",&year,&month,&day,&days);
        int row=isLeapYear(year);
        for(int i=1;i<month;i++){
            days+=daytab[row][i];
        }
        days+=day;//计算一共多少天
        while(days>dayOfYear(year)){
            days-=dayOfYear(year);//先减天数
            year++;
        }
        row=isLeapYear(year),month=1,day=days;
        while(day>daytab[row][month]){
            day-=daytab[row][month];
            month++;
        }
        printf("%04d-%02d-%02d\n",year,month,day);
    }
    return 0;
}
