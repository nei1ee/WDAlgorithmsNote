#include<iostream>
#include<queue>
using namespace std;
struct Animal {
    int order,id;
    Animal(int o,int i):order(o),id(i) {}
};
int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        queue<Animal> dog,cat;
        int order=0,m,t;
        for(int i=0; i<n; i++) {
            scanf("%d%d",&m,&t);
            if(m==1) {
                if(t>0) {//狗进入收容所
                    dog.push(Animal(order++,t));
                } else {
                    cat.push(Animal(order++,t));
                }
            } else {
                bool isDog=true;
                if(t==0) { //收养动物中最早进入
                    if(dog.empty()&&cat.empty()) {
                        continue;
                    } else if(cat.empty()) {
                        //狗中找
                        isDog=true;
                    } else if(dog.empty()) {
                        //猫中找
                        isDog=false;
                    } else {
                        if(dog.front().order>cat.front().order) {
                            //收养猫
                            isDog=false;
                        }
                    }
                } else if(t>0) { //收养狗
                    if(dog.empty()) {
                        continue;
                    }
                } else {
                    if(cat.empty()) {
                        continue;
                    }
                    isDog=false;
                }
                if(isDog) {
                    printf("%d ",dog.front().id);
                    dog.pop();
                } else {
                    printf("%d ",cat.front().id);
                    cat.pop();
                }
            }
        }
    }
    return 0;
}
