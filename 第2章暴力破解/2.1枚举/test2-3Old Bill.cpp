#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z;
    while(scanf("%d",&n)!=EOF)
    {
        int maxn=0,ii=0,jj=0;
        bool p=false;
        scanf("%d %d %d",&x,&y,&z);
        for(int i=1; i<=9; i++)
        {
            for(int j=0; j<=9; j++)
            {
                int s=i*10000+x*1000+y*100+z*10+j;
                if((s/n)*n==s)
                {
                    if(s/n>maxn)
                    {
                        maxn=s/n;
                        ii=i;
                        jj=j;
                        p=true;
                    }
                }
            }
        }
        if(p)
        {
            printf("%d %d %d\n",ii,jj,maxn);
        }
        else
        {
            printf("0");
        }

    }

    return 0;
}
