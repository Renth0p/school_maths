#include <iostream>
#include <cmath>

using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
double x= -15.246;
double y= 4.642 * pow(10, -2);
double z= 21;
double s;

s= log10(pow(y, -sqrt(fabs(x)))) * (x - y/2) + pow(sin(atan(z)),2);

cout << "result = " << s;

system("pause");
return 0;
}

//ответ не совпадает 
