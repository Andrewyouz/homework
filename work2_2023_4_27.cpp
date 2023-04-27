#include<iostream>

using namespace std;

class Algorithm{
    public:
        Algorithm();
        int common_divisor();
        int common_multiple();
    private:
        int num1;
        int num2;
};

Algorithm::Algorithm(){
    cin>>num1>>num2;
}

int Algorithm::common_multiple(){
        int temp;
    if(num1<num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for(int i=1;i<=num2;i++){
        if((num1*i)%num2==0){
            return num1*i;
        }
    }
    return num1*num2;
}

int Algorithm::common_divisor(){
    return num1*num2/common_multiple();
}

int main(){
    Algorithm a;
    cout<<a.common_multiple()<<endl;
    cout<<a.common_divisor()<<endl;
    system("pause");
    return 0;
}