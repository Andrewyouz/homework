#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        Solution();
        void odd_sum();
    private:
        vector<int> vec;
};

Solution::Solution(){
    int num;
    while(1){
        cin>>num;
        if(num<=0)
            break;
        if(num%2==1)
            vec.push_back(num);
    }
}

void Solution::odd_sum(){
    int sum=0;
    auto iter=vec.begin();
    while(iter!=vec.end()){
        sum+=*iter;
        iter++;
    }
    cout<<sum<<endl;
}

int main(){
    Solution s;
    s.odd_sum();
    system("pause");
    return 0;
}