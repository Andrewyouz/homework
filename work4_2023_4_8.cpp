#include<iostream>
#include<vector>
using namespace std;

#define inti_year 1900
#define inti_month 1 
#define inti_day 1

string date[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
class Solution{
    public:
        Solution();
        void year_days();
        void mont_days();
        void day_days();
        string judge();
        int num[3];
        int sum=0;
};

Solution::Solution(){
    for(int i=0;i<3;i++){
        cin>>num[i];
        cin.get();
    }
}    

void Solution::year_days(){
    for(int i=inti_year+1 ;i<=num[0];i++){
        if( (i%4)==0 || (i%100)==0 ) sum+=366;
        sum+=365;
    }
}

void Solution::mont_days(){
    for(int i=inti_month+1;i<=num[1];i++){
        if(i==2 && ( (num[0]%=4)==0 || (num[0]%=100)==0 ) )  sum+=29;
        if(i==2 && ( (num[0]%=4)!=0 && (num[0]%=100)!=0 ) )  sum+=28;
        if( (i%2)==0 && i<=6 || (i%2)!=0 && i>=9 )  sum+=30;
        if( (i%2)==0 && i>=8 || (i%2)!=0 && i>=1 )  sum+=31;
    }
}

void Solution::day_days(){
    for(int i=inti_day+1;i<=num[2];i++){
        sum+=1;
    }
}

string Solution::judge(){
    return date[ (sum%=7) ];
}

int main(){
    Solution a;
    a.year_days();
    a.mont_days();
    a.day_days();
    cout<<a.judge()<<endl;
    system("pause");
    return 0;
}