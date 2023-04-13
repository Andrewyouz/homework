//找回文数
#include<iostream>
#include<string>
using namespace std;

class Solution {
    public:
        Solution();
        ~Solution();
        bool isPalindrome(int );
        void palin_print();
    private:
        int num;
        int n;
};

Solution::Solution()
{
    cin>>num>>n;
}

bool Solution::isPalindrome(int a){
    int b = 0;
    int c = a;
    while(c){
        b = b*10 + c%10;
        c /= 10;
    }
    if(a == b)
        return true;
    else
        return false;
}

void Solution::palin_print(){
    int a = num+1;
    while(n>0){
        if(isPalindrome(a)){
            cout<<a<<endl;
            n--;
        }
    }
}

int main(){
    int i;
    cin>>i;
    while(i>0){
        Solution s;
        s.palin_print();
        i--;
    }
    system("pause");
    return 0;
}