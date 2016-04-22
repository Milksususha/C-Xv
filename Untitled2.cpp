//÷икл *;..;*
#include <iostream>
using namespace std;
int main ()
{
setlocale(0, "");
int i = 0;
int sum = 0;
do 
{
i++;
sum += i;
} 
while (i < 1000);
cout << "—умма чисел от 1 до 1000 = " << sum << endl;
system ("pause");
return 0;
}
