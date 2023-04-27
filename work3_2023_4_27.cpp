//计算分数精确值
#include <iostream>

using namespace std;

class Solution{
    public:
        Solution();
        void output();
        int calculate();
    private:
        int divisor;
        int dividend;
};

Solution::Solution(){
    cin>>dividend;
    //从输入中读入一个字符
    char c;
    cin>>c;
    cin>>divisor;
}

int Solution::calculate(){
    int num=dividend*10;
    int temp=( num % divisor );
    if(temp==0) 
        return 0;
    else{
        dividend=temp;
        return (num-temp)/divisor;
    }
}

void Solution::output(){
    cout<<"0.";
    for(int i=0;i<200;i++){
        int a=calculate();
        if(!a){
            break;
        }
        else{
            cout<<a;
        }
    }
}

int main(){
    Solution s;
    s.output();
    system("pause");
    return 0;
}