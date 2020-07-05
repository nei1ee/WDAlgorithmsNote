#include<iostream>
#include<algorithm>

using namespace std;

struct Mouse {
    int index;
    int weight;
    string hat_color;
};

bool mycompare(Mouse x,Mouse y) {
    return x.weight>y.weight;
}

int main() {
    int n;
    Mouse mouse[100];
    while(scanf("%d",&n)!=EOF) {
        for(int i=0; i<n; i++) {
            cin>>mouse[i].weight>>mouse[i].hat_color;
        }
        sort(mouse,mouse+n,mycompare);
        for(int i=0; i<n; i++) {
            cout<<mouse[i].hat_color<<endl;
        }
    }
    return 0;
}
