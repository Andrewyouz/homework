//对1到100的数实现年龄段转换
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "请输入年龄：";
    cin >> age;
    if (age >= 1 && age <= 100)
    {
        if (age <= 18)
        {
            cout << "少年" << endl;
        }
        else if (age <= 28)
        {
            cout << "青年" << endl;
        }
        else if (age <= 55)
        {
            cout << "中年" << endl;
        }
        else
        {
            cout << "老年" << endl;
        }
    }
    else
    {
        cout << "输入的年龄不正确，请重新输入！" << endl;
    }
    return 0;
}
