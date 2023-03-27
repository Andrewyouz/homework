#include<iostream>
#include<vector>

using namespace std;

class adress{
    public:
        adress();
        void search();
        bool jud_adress();
        bool jud_char();
    private:
        int a,zone;
        vector<char> nums;
};

adress::adress(){
    char temp;
    while(cin>>temp){
        nums.push_back(temp);
    }
}

void adress::search(){
    int i=0;
    while(i<nums.size()){
        if(nums[i]=='@') a=i;
        if(nums[i]=='.') zone=i;
    }
}

bool adress::jud_adress(){
    if(a==0) return false;
    if(zone==nums.size()-1) return false; 
    if(zone-a<2) return false;
    else return true;
}

bool adress::jud_char(){
    int i=0;
    while(i<a){
        if( (nums[i]<='z'&&nums[i]>='0') || nums[i]=='_' || nums[i]=='-') i++;
        else return false;
    }
    i+=2;
    while(i<zone){
        if( (nums[i]<='z'&&nums[i]>='0') || nums[i]=='_' || nums[i]=='-') i++;
        else return false;
    }
    i+=2;
    while(i<nums.size()){
        if( (nums[i]<='z'&&nums[i]>='0') || nums[i]=='_' || nums[i]=='-') i++;
        else return false;
    }
    return true;
}

int main()
{
    adress a;
    a.search();
    if( a.jud_adress() || a.jud_char() ) cout<<"No\n";
    else cout<<"Yes\n";
    return 0;
}