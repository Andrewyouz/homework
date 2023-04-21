//找回文数
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
    public:
        Solution();
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
    string s=to_string(a);
    int i=s.length();
    for(int j=0;j<i;j++){
        if(s[j]!=s[i-j-1]) return false;
    }
    return true;
}

void Solution::palin_print(){
    int a = num+1;
    while(n>0){
        if(isPalindrome(a)){
            cout<<a++<<" ";
            n--;
        }
        ++a;
    }
}

int main(){
    int i;
    cin>>i;
    while(i>0){
        Solution s;
        s.palin_print();
        cout<<endl;
        i--;
    }
    system("pause");
    return 0;
}