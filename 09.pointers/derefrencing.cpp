#include <iostream>
using namespace std;
int main(){
    int a=10;
    cout<<*(&a)<<endl;     // 10

    int *ptr=&a;

    cout<<ptr<<endl;       // 0x16fd6ed9c
    cout<<*ptr<<endl;      // 10

    *ptr=20;
    cout<<a<<endl;         //20
}
