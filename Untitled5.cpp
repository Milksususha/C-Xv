//Перегрузка функций *;..;*
#include <iostream>
int max(int num1, int num2)
{
if (num1 > num2)
return num1;
return num2;
}
double max(double num1, double num2)
{
if (num1 > num2)
return num1;
return num2;
}
int main()
{
int imax = max(1, 10);
double dmax = max(1.0, 20.0);
std::cout << "imax = " << imax << std::endl;
std::cout << "dmax = " << dmax << std::endl;
std::cin.get();
system ("pause");
return 0;
}
