//字符串比较
#include<iostream>

using namespace std;

class Solution{
    public:
        Solution();
    private:
        string str1,str2;
};

Solution::Solution(){
    getline(cin,str1);

    getline(cin,str2);
    int i,j;
    for(i=0;i<( str2.size()-str1.size()+1 );i++){
        if(str2[i]==str1[0]){
            for(j=1;j<str1.size();j++){
                if(str2[i+j]!=str1[j]){
                    break;
                }
            }
            if(j==str1.size()){
                cout<<i<<" ";
            }
        }

    }

}

int main(){
    Solution s;
    system("pause");
    return 0;
}