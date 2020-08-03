#include<iostream>
#include<queue>

using namespace std;

struct Complex {
    int real;
    int imag;
    Complex(int a,int b):real(a),imag(b) {};
    //÷ÿ‘ÿ–°”⁄∫≈
    bool operator<(Complex c) const {
        return real*real+imag*imag<c.real*c.real+c.imag*c.imag;
    }
};

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        priority_queue<Complex> myPriorityQueue;
        for(int i=0; i<n; i++) {
            string str;
            cin>>str;
            if(str=="Pop") {
                if(myPriorityQueue.empty()) {
                    printf("empty\n");
                } else {
                    Complex current=myPriorityQueue.top();
                    myPriorityQueue.pop();
                    printf("%d+i%d\n",current.real,current.imag);
                    printf("SIZE = %d\n",myPriorityQueue.size());
                }
            } else {
                int a,b;
                scanf("%d+i%d",&a,&b);
                myPriorityQueue.push(Complex(a,b));
                printf("SIZE = %d\n",myPriorityQueue.size());
            }
        }
    }
    return 0;
}
