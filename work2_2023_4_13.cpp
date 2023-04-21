//通过函数计算圆的周长和面积
#include <iostream>
#define PI 3.14
using namespace std;


class Circle {
    public:
        Circle();
        void setRadius(double);
        double getArea();
        double getPerimeter();
    private:
        double radius;
};

Circle::Circle(){
    cin>>radius;
}

void Circle::setRadius(double r){
    radius=r;
}

double Circle::getArea(){
    return PI*radius*radius;
}

double Circle::getPerimeter(){
    return 2*PI*radius;
}

int main(){
    Circle c;
    cout<<c.getArea()<<" "<<c.getPerimeter()<<endl;
    system("pause");
    return 0;
}