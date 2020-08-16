#include<iostream>
using namespace std;
int daytab[2][13]= {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
//ÅĞ¶ÏÊÇ·ñÈòÄê
bool isLeapYear(int year) {
    return (year%400==0||(year%4==0&&year%100!=0));
}

int main() {
    int year,month,day;
    while(scanf("%d %d %d",&year,&month,&day)!=EOF) {
        int days=0;
        int row=isLeapYear(year);//ÅĞ¶ÏdaytabÄÄÒ»ĞĞ
        for(int i=1; i<month; i++) {
            days+=daytab[row][i];
        }
        days+=day;
        printf("%d\n",days);
    }
    return 0;
}
