#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
        solution();
        void print();
    private:
        vector<int> nums;
};

solution::solution(){
    int temp;
    while(cin>>temp){
        nums.push_back(temp);
    }
}

void solution::print(){
    sort(nums.begin(),nums.end());
    int i=0;
    while(i+1<=nums.size()){
        if(nums[i]==nums[i+1]) cout<<nums[i]<<" ";
        i++;
    }
}

int main()
{
    solution a;
    a.print();
    system("pause");
    return 0;
}
