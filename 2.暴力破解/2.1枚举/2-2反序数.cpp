#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    for(int a=1;a<10;a++){
        for(int b=0;b<10;b++){
            for(int c=0;c<10;c++){
                for(int d=0;d<10;d++){
                    int s=a*1000+b*100+c*10+d;
                    if(9*s==(d*1000+c*100+b*10+a)){
                        printf("%d\n",s);
                    }
                }
            }
        }
    }

    return 0;
}
