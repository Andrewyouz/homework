
#include <iostream>

using namespace std;

int gcd(int a, int b) { // 求最大公约数函数
    return b == 0 ? a : gcd(b, a % b);
}

struct Fraction { 
    int numerator; 
    int denominator; 

    Fraction(int numerator = 0, int denominator = 1) { 
        if (denominator < 0) { // 分母为负数时，分子分母同乘-1
            numerator = -numerator;
            denominator = -denominator;
        }
        int d = gcd(abs(numerator), denominator);
        this->numerator = numerator / d;
        this->denominator = denominator / d;
    }

    Fraction operator+(const Fraction& o) const { // 分数加法运算符重载
        int lcm = denominator * o.denominator / gcd(denominator, o.denominator);
        return Fraction(numerator * lcm / denominator + o.numerator * lcm / o.denominator, lcm);
    }

    void print() const { 
        if (numerator == 0) { // 特判分子为0的情况
            cout << 0 << endl;
            return;
        }

        if (denominator == 1) { // 特判分母为1的情况
            cout << numerator << endl;
            return;
        }

        if (abs(numerator) > denominator) { // 强制转化为带分数形式
            int integer = numerator / denominator;
            int frac_numerator = numerator % denominator;
            if (frac_numerator < 0) { 
                frac_numerator = -frac_numerator;
                integer = -integer;
            }
            cout << integer << " " << frac_numerator << "/" << denominator << endl;
        } else { 
            cout << numerator << "/" << denominator << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Fraction sum(0); // 初始化和为 0
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        sum = sum + Fraction(a, b);
    }

    sum.print(); 
    return 0;
}


