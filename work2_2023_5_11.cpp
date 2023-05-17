//，用pow函数计算x的y次方

#include <iostream>

using namespace std;
//用位运算的方式计算x的y次方
int pow(int x,int y){
    int result=1;
    while(y>0){
        if(y&1){
            result*=x;
        }
        x*=x;
        y>>=1;
    }
    return result;
}

