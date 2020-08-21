#include<iostream>

using namespace std;
/**人见人爱A^B，结果保留最后三位，因而在快速幂的过程中进行取模运算
*快速幂思路：在不断二进制转换指数的同时，底数不断求自己的平方
*本题最终mod 1000
*/
int FastExponentiation(int a,int b,int mod) {
    int answer=1;
    while(b!=0) {
        if(b%2==1) {
            answer*=a;
            answer%=mod;
        }
        b/=2;
        a*=a;
        a%=mod;
    }
    return answer;
}
int main() {
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF) {
        if(a==0&&b==0)break;
        printf("%d\n",FastExponentiation(a,b,1000));
    }
    return 0;
}

