#include <iostream>
#include <cmath>

using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
double x= 3.74 * pow(10, -2);
double y= -0.825;
double z= 0.16 * pow(10, 2);
double s;

s= (1+pow(sin(x+y),2)) / fabs(x - 2*y/1+pow(x,2)*pow(y,2)) * pow(x, fabs(y)) + pow(cos(atan(1/z)), 2);

cout « "result = " « s;

system("pause");
return 0;
}

// 3 пример
