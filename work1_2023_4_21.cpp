#include<iostream>

int main() {
  int num, sum = 0;
  std::cout << "请输入一个三位的十进制整数: ";
  std::cin >> num;

  if (num >= 100 && num <= 999) {
    int unit_digit = num % 10;
    int tens_digit = (num / 10) % 10;
    int hundreds_digit = num / 100;

    sum = unit_digit + tens_digit + hundreds_digit;

    std::cout << "各位数字之和为: " << sum << std::endl;
  } else {
    std::cout << "输入的数不是三位数，请重新输入!" << std::endl;
  }

  return 0;
}
