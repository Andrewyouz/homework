//计算学生平均分数
#include <iostream>
#include<string>
using namespace std;

class Student {
    public:
        Student();
        double getAverage();
    private:
        double daily_score;
        double exam_score;
};

