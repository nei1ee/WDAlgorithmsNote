#include<iostream>
#include<string.h>
using namespace std;

//月份对应天数
int daystab[2][13]= {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
//月份对应英文
char monthtab[13][10]= {
    " ","January", "February", "March", "April",
    "May","June", "July", "August",
    "September", "October", "November", "December"
};
//周对应英文
char weektab[8][10]= {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};
//判断是否闰年
bool isLeapYear(int year) {
    return (year%400==0||(year%4==0&&year%100!=0));
}
//某一天是该年的第几天
int daysofyear(int year,int month,int day) {
    int leap=isLeapYear(year);
    int sumdays=0;
    for(int i=1; i<month; i++) {
        sumdays+=daystab[leap][i];
    }
    sumdays+=day;
    return sumdays;
}
//月份转整数,
int monthbymonth(char* month) {
    for(int i=1; i<=12; i++) {
        if(strcmp(month,monthtab[i])==0) {
            return i;
        }
    }
    return 0;
}
//week=((year-1)+(year-1)/4-(year-1)/100+(year-1)/400+days)%7
int main() {
    int day,year;
    char month[10];
    while(scanf("%d %s %d",&day,month,&year)!=EOF) {
        int mon=monthbymonth(month);
        int days=daysofyear(year,mon,day);
        int week=year-1+(year-1)/4-(year-1)/100+(year-1)/400+days;
        printf("%s\n",weektab[week%7]);
    }
    return 0;
}
