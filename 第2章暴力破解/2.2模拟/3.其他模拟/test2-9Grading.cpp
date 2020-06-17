#include<iostream>

using namespace std;
//取绝对值
int abs(int a,int b) {
    if(a>=b) {
        return a-b;
    }
    return b-a;
}
//取3个数中最大数
int max3(int a,int b,int c) {
    int maxn=0;
    if(a>=b) {
        if(a>=c) {
            maxn=a;
        } else {
            maxn=c;
        }
    } else {
        maxn=b;
    }
    return maxn;
}
//两个数求平均
double avg(int a,int b) {
    return (a+b)/2.0;
}

int main() {
    int p,t,g1,g2,g3,gj;
    while(scanf("%d %d %d %d %d %d",&p,&t,&g1,&g2,&g3,&gj)!=EOF) {
        double score=0;
        if(g1==g2&&g1==g3)score=g1;
        else {
            if(abs(g1,g2)<=t) {
                score=avg(g1,g2);
            } else {
                int s1=abs(g3,g1);
                int s2=abs(g3,g2);
                if(s1<=t&&s2<=t) {
                    score=max3(g1,g2,g3);
                } else if(s1>t&&s2>t) {
                    score=g3;
                } else {
                    if(s1<s2) {
                        score=avg(g3,g1);
                    } else {
                        score=avg(g3,g2);
                    }
                }
            }
        }
        printf("%0.1f\n",score);
    }
    return 0;
}
