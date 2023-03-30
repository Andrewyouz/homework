#include<iostream>
using namespace std;
class solution{
    public:
        solution(){
            cin>>n;
        }
        int sum();
        int n;
};

int solution::sum()
{
    int b=0;
    while(n>0){
        b+=n%10;
        n/=10;
    }
    return b;
}

int main()
{
    solution n;
    cout<<n.sum()<<"\n";
    system("pause");
    return 0;
}
