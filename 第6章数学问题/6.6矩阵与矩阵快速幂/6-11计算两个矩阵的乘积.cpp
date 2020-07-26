#include<iostream>

using namespace std;

//矩阵结构体
struct Matrix {
    int matrix[3][3];
    //行与列
    int row,col;
    Matrix(int r,int c):row(r),col(c) {}
};

//矩阵乘法运算
Matrix multiply(Matrix x,Matrix y) {
    Matrix answer(x.row,y.col);
    for(int i=0; i<answer.row; i++) {
        for(int j=0; j<answer.col; j++) {
            answer.matrix[i][j]=0;
            for(int k=0; k<x.col; k++) {
                answer.matrix[i][j]+=x.matrix[i][k]*y.matrix[k][j];
            }
        }
    }
    return answer;
}

//打印矩阵
void printMatrix(Matrix answer) {
    for(int i=0; i<answer.row; i++) {
        for(int j=0; j<answer.col; j++) {
            printf("%d ",answer.matrix[i][j]);
        }
        printf("\n");
    }
    return ;
}

int main() {
    Matrix x(2,3),y(3,2);
    for(int i; i<x.row; i++) {
        for(int j=0; j<x.col; j++) {
            scanf("%d",&x.matrix[i][j]);
        }
    }
    for(int i; i<y.row; i++) {
        for(int j=0; j<y.col; j++) {
            scanf("%d",&y.matrix[i][j]);
        }
    }
    Matrix answer=multiply(x,y);
    printMatrix(answer);

    return 0;
}
