#include<iostream>
using namespace std;
int main()
{
    int h;
    while(scanf("%d",&h)!=EOF)
    {
        int col=h+(h-1)*2;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<col-(h+i*2); j++)
            {
                printf(" ");
            }
            for(int j=0; j<h+i*2; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
