#include<iostream>
#include<cstdio>

using namespace std;
int re(int x)
{
    int s=0;
    while(x!=0)
    {
        s=s*10;
        s+=x%10;
        x=x/10;
    }
    return s;
}

int main()
{
    for(int i=0; i<256; i++)
    {
        if(i*i==re(i*i))
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
