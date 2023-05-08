//教授上课人数
#include<iostream>

using namespace std;

class Solution{
    public:
        Solution();
        bool iscancle();
    private:
        int N,K;
        int count=0;
};

Solution::Solution(){
    cin>>N>>K;
    int time;
    for(int i=0;i<N;i++){
        cin>>time;
        if(time>0){
            count++;
        }
        if(iscancle()){
            cout<<"YES"<<endl;
            break;
        }
    } 
    if(!iscancle()){
        cout<<"NO"<<endl;
    }
}

bool Solution::iscancle(){
    if(count>=N-K)
        return true;
    return false;
}

int main(){
    Solution s;
    system("pause");
    return 0;
}