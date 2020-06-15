#include<iostream>
#include<cstdio>

using namespace std;

bool isseven(int x)
{
    bool p=false;
    if(x%7==0)
    {
        p=true;
    }
    else
    {
        while(x!=0)
        {
            if(x%10==7)
            {
                p=true;
                break;
            }
            else
            {
                x=x/10;
            }
        }
    }
    return p;
}

int main()
{
    int n;
    int s=0;
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        if(!isseven(i))
        {
            s=s+i*i;
        }
    }
    printf("%d",s);

    return 0;
}
