#include <iostream>
#include<cstring>
#include<algorithm>
#define MAXN 25
using namespace std;

int sticks[MAXN];
bool visit[MAXN];

int side;
int m,n;
bool DFS(int sum,int number,int position)
{
    if(number == 3)
        return true;

    int sample = 0;
    for(int i = position; i<m; i++)
    {
        if( visit[i] || sum + sticks[i] > side || sticks[i] ==sample) continue;
        visit[i] = true;
        if( sum + sticks[i] == side)
        {
            if(DFS(0,number+1,0))return true;
            else sample = sticks[i];
        }
        else
        {
            if(DFS(sum+sticks[i],number, i +1))return true;
            else sample = sticks[i];
        }
        visit[i] = false;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    while(n--)
    {
        int length = 0;
        cin >> m;
        for(int i=0; i<m; i++)
        {
            cin >> sticks[i];
            length += sticks[i];
        }
        memset(visit,false,sizeof(visit));
        if(length % 4 != 0)
        {
            cout<< "no\n";
            continue;
        }
        side = length / 4;
        sort(sticks,sticks+m,less<int>());
        if(sticks[0] > side)
        {
            cout<< "no\n";
            continue;
        }
        if(DFS(0,0,0))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }


    }


    return 0;
}
