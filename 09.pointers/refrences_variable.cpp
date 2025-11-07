// int a=5;
// int &b=a;
//a & b refers to same location in memory!!


#include <iostream>
using namespace std;
int main(){
    int a=10;
    int &b=a;     //  & -> also used for creating refrences!!
    a=50;

    cout<<a<<endl;
    cout<<b<<endl;
}


// & -> address of / creating refrences!!
// * -> derefrencing / creating pointers!!
