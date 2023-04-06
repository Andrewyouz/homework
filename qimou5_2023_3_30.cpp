
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s; 

    int weights[26] = {0};  // 初始化每个字母的权值为0
    int n = s.length();
    for (int i = 0; i < n; i++) {
        int c = s[i] - 'a';  // 将字母转换成数字
        weights[c]++;  // 相应字母的权值加1
    }

    sort(weights, weights + 26, greater<int>());  // 将权值从大到小排序
    int ans = 0;  
    for (int i = 0; i < 26; i++) {
        ans += (i + 1) * weights[i]; 
    }
    cout << ans << endl;  

    return 0;
}
