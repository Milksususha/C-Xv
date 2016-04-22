//Рекурсия *;..;*
#include <iostream>
#include "math.h"
using namespace std;
double d(double n)
{
if ( n == 1 ) return 0;
if ( n == 2 ) return 1;
return n * d(n-1) + pow(-1, n);
}
int main()
{
cout << d(4);
}
