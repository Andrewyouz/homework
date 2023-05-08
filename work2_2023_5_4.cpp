//指针排序
//提供n个数，按照从小到大的顺序输出
#include <iostream>
#include <vector>
using namespace std;
//输入行有两行数据，第一行为n，第二行为n个整数
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int *p=v.data();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(p+i)>*(p+j)){
                int temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    system("pause");
    return 0;
}