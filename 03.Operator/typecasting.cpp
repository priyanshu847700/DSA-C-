// type coversion is of two type -
// 1. Implicit Type Conversion
// 2. Explicit Type Conversion


#include <iostream>
using namespace std;
int main(){

    //Implicit Type Conversion

    int a=10,b=3;
    float c=3.0;

    cout<<a/b<<endl;      //3
    cout<<a/c<<endl;      //3.33333

    cout<<('A' + 1)<<endl;  //66
    cout<<('a' + 1)<<endl;  //98

    // Explicit Type Conversion

    cout<<(int)('A')<<endl;   //65
    cout<<(int)('a')<<endl;   //67

    float PI=3.14;
    cout<<(int) PI << endl;      //3

    cout<<(float) 10/3 <<endl;   //3.33333
    cout<<(char) ('A'+1) <<endl;   //B


    cout<< (bool)3 +2 << endl;        //3
    cout<< (23.5 + 2 + 'A') << endl;        //90.5
    return 0;

}

