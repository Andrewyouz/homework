//实现成绩转换
#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "请输入成绩：";
    cin >> score;
    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            cout << "优秀" << endl;
        }
        else if (score >= 80)
        {
            cout << "良好" << endl;
        }
        else if (score >= 70)
        {
            cout << "中等" << endl;
        }
        else if (score >= 60)
        {
            cout << "及格" << endl;
        }
        else
        {
            cout << "不及格" << endl;
        }
    }
    else
    {
        cout << "输入的成绩不正确，请重新输入！" << endl;
    }
    return 0;
}