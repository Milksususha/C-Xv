//Перегрузка функций *;..;*
#include <iostream>
using namespace std;
class MyClass {
int a,b,c,sum;
public:
void xcod(int i,int j,int s){
a=i;
b=j;
c=s;
sum=a+b-c;
}
void xcod(int i,int j){
a=i;
b=j;
sum=a*b;
}     
void getsum(){
cout<<"sum= "<<sum<<endl;
}       
} obj1,obj2;
int main() {
obj1.xcod(5,3,4);
obj1.getsum();
obj2.xcod(2,10);
obj1.getsum();
obj2.getsum();
system("pause");
return 0;
}
