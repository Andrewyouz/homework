//计算输入的两个多项式的和
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    cin>>n;
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    vector<int> v3;
    int i=0,j=0;
    while(i<v1.size()&&j<v2.size()){
        if(v1[i]==v2[j]){
            v3.push_back(v1[i]);
            i++;
            j++;
        }
        else if(v1[i]<v2[j]){
            v3.push_back(v1[i]);
            i++;
        }
        else{
            v3.push_back(v2[j]);
            j++;
        }
    }
    while(i<v1.size()){
        v3.push_back(v1[i]);
        i++;
    }
    while(j<v2.size()){
        v3.push_back(v2[j]);
        j++;
    }
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    system("pause");
    return 0;
}