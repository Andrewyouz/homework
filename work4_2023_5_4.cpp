//密钥格式化
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

class Solution{
    public:
        Solution();
        void handle();
    private:
        string str;
        int n;
};

Solution::Solution(){
    char c;
    while(cin.get(c)){
        if(c=='\n')
            break;
        if(c=='-')
            cin>>c;
        str+=c;
    }
    cin>>n;
}

void Solution::handle(){
    unsigned int i=0,j=0;         //因为str.size()的返回值是unsigned int，所以i也要是unsigned int
    while(i<str.size()){        
        for( ;j<n;j++){
            if(isalpha(str[i]) )
                cout<<static_cast<char>( toupper(str[i]) );         //static_cast<char>强制转换为char类型
            else 
                cout<<str[i];
            i++;
            if(i==str.size())       //i递增后，判断是否超过字符串末尾
                break;
        }
        j=0;                      //j=0,重新开始计数
        if(i<str.size())          //i没有超过字符串末尾，输出'-',避免最后输出多余的'-'
            cout<<'-';
    }
}

int main(){
    Solution s;
    s.handle();
    system("pause");
    return 0;
}