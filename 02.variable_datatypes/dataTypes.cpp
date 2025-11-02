//dataTypes!!     -> 1 byte = 8 bits
//  # Primitive                     # Non-Primitive!!
//   1 int  (4 byte)                 1 Array
//   2 float  (4 byte)               2 String
//   3 double  (8 byte)              3 Stack
//   4 bool  (1 byte)                4 Queue
//   5 char  (1 byte)                5 Tree

#include <iostream>
using namespace std;
int main(){
    int a=12;
    float b=3.45;
    bool t=true;
    double d=34567897654345678;
    char c='A';

    cout<<typeid(a).name()<<endl;
    cout<<sizeof(a)<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<sizeof(b)<<endl;
    cout<<typeid(t).name()<<endl;
    cout<<sizeof(t)<<endl;
    cout<<typeid(d).name()<<endl;
    cout<<sizeof(d)<<endl;
    cout<<typeid(c).name()<<endl;
    cout<<sizeof(c)<<endl;
    return 0;
}