#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<=100; i++)
    {
        for(int j=0; j<=100-i; j++)
        {
            int k=100-i-j;
            if(i*5*3+j*3*3+k<=n*3)
            {
                cout<<"x="<<i<<",";
                cout<<"y="<<j<<",";
                cout<<"z="<<k<<endl;
            }
        }
    }

    return 0;
}
