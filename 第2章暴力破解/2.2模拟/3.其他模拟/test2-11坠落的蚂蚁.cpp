
#include<iostream>
#include<algorithm>

using namespace std;
const int N = 102;

int aa[N],bb[N];        //left¬Ï“œŒª÷√ right¬Ï“œŒª÷√
int a[N],b[N];
int main()
{
    int n;
    while(cin>>n)
    {
        int pos=0;              //¬Ï“œAŒª÷√
        for(int i=1;i<=n;++i)
        {
            cin>>a[i]>>b[i];
            if(b[i]==0) pos=a[i];
        }
        int nl=0,nr=0;
        for(int i=1;i<=n;++i)
        {
            if(a[i]<pos && b[i]>0) aa[++nl]=100-a[i];
            else if(a[i]>pos && b[i]<0) bb[++nr]=a[i];
        }
        if(nl==nr) cout<<"Cannot fall!"<<endl;
        else if(nl>nr)
        {
            sort(aa+1,aa+nl+1);
            cout<<aa[nr+1]<<endl;
        }
        else
        {
            sort(bb+1,bb+nr+1);
            cout<<bb[nl+1]<<endl;
        }
    }
    return 0;
}
