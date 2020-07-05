#include<iostream>
#include<algorithm>
using namespace std;

struct Country {
    int id;
    int glod;
    int total;
    int people;
    double glod_p,total_p;
    int rank[5];
    int best;
};

int main() {
    int m,n;//n国家数，m参与排名的国家数
    while(scanf("%d %d",&n,&m)!=EOF) {
        Country country[n];
        for(int i=0; i<n; i++) {
            scanf("%d %d %d",&country[i].glod,&country[i].total,&country[i].people);
            country[i].glod_p=country[i].glod/(country[i].people*1.0);
            country[i].total_p=country[i].total/(country[i].people*1.0);

        }
    }
}
