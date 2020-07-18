#include<iostream>
#include<string>
#include<stack>
#include<cctype>

using namespace std;

//优先级顺序#,$,+-,*/
int priority(char c) {
    if(c=='#') {
        return 0;
    } else if(c=='$') {
        return 1;
    } else if(c=='+'||c=='-') {
        return 2;
    } else {
        return 3;
    }
}

//获得数字
double getNumber(string str,int& index) {
    double number=0;
    while(isdigit(str[index])) {
        number=number*10.0+str[index]-'0';
        index++;
    }
    return number;
}

double Calculate(double x,double y,char op) {
    double ans=0;
    if(op=='+') {
        ans=x+y;
    } else if(op=='-') {
        ans=x-y;
    } else if(op=='*') {
        ans=x*y;
    } else if(op=='/')  {
        ans=x/y;
    }
    return ans;
}

int main() {
    string str;
    while(getline(cin,str)) {
        int index=0;
        stack<char> oper;
        stack<double> data;
        str+='$';
        oper.push('#');
        while(index<str.size()) {
            if(str[index]==' ') {
                index++;
            } else if(isdigit(str[index])) {
                data.push(getNumber(str,index));
            } else {
                if(priority(oper.top())<priority(str[index])) {
                    oper.push(str[index]);
                    index++;
                } else {
                    double y=data.top();
                    data.pop();
                    double x=data.top();
                    data.pop();
                    data.push(Calculate(x,y,oper.top()));
                    oper.pop();
                }
            }
        }
        printf("%0.f\n",data.top());
    }
    return 0;
}
