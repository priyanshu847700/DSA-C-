#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int **ptr3=&ptr;
    float b=4.5;
    float *ptr2=&b;


    cout<<ptr<<" == "<<&a<<endl;        // 0x16d912da8 == 0x16d912da8
    cout<<ptr2<<" == "<<&b<<endl;       // 0x16d912d9c == 0x16d912d9c
    cout<<ptr3<<" == "<<&ptr<<endl;     // 0x16d226da0 == 0x16d226da0


    cout<<sizeof(ptr2)<<endl;    //8
    cout<<sizeof(ptr)<<endl;     //8

    return 0;
}