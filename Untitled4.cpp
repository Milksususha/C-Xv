//Указатели *;..;*
#include <iostream>
using namespace std;
int main()
{
int *a = new int;
int *b = new int;
float *c = new float;
delete c;
delete b;
delete a;
system ("pause");
return 0;
}
