//实现四季节转换
#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "请输入月份：";
    cin >> month;
    if (month >= 1 && month <= 12)
    {
        if (month == 12 || month == 1 || month == 2)
        {
            cout << "冬季" << endl;
        }
        else if (month == 3 || month == 4 || month == 5)
        {
            cout << "春季" << endl;
        }
        else if (month == 6 || month == 7 || month == 8)
        {
            cout << "夏季" << endl;
        }
        else if (month == 9 || month == 10 || month == 11)
        {
            cout << "秋季" << endl;
        }
    }
    else
    {
        cout << "输入的月份不正确，请重新输入！" << endl;
    }
    return 0;
}