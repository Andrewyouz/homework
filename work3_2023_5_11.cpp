//颠倒给定三十二位无符号数的二进制位

#include <iostream>
#include <bitset>

using namespace std;

int main(){
    unsigned int num;
    cin>>num;
    bitset<32> bit(num);
    cout<<bit<<endl;
    bitset<32> bit2;
    for(int i=0;i<32;i++){
        bit2[i]=bit[31-i];
    }
    cout<<bit2<<endl;
    cout<<bit2.to_ulong()<<endl;
    return 0;
}
