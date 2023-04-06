#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        Solution(){
            cin>>n;
        }
        void print_line(int );
        void repeated_print();
        void init(int );
        vector<int> a,b;
        int n;
};

void Solution::repeated_print(){
    for(int i=1;i<=n;i++){
        print_line(i);
    }
}
void Solution::print_line(int i){
    init(i);
    i--;
    while(i>=0){
        if(i==0){
            cout<<a[i--]<<endl;
            break;
        }
        cout<<a[i--]<<" ";
    }
}
void Solution::init(int i){
    a.resize(i);
    for(int i1=0;i1<i;i1++){
        if(i1==0||i1==i-1){
            a[i1]=1;
        }
       else{
            a[i1]=b[i1]+b[i1-1];
       }
    }
    b.assign(a.begin(),a.end());
}

int main()
{
    int num;
    cin>>num;
    while(num>0){
        Solution A;
        A.repeated_print();
        num--;
    }
    system("pause");
    return 0;
}

