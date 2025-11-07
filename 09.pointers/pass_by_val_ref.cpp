//pass by value & pass by refrence!!


// //pass by value!!
// #include <iostream>
// using namespace std;
// void callbyvalue(int a){
//     a=20;
//     cout<<a<<endl;
// }
// int main(){
//     int a=10;
//     callbyvalue(a);
//     cout<<a<<endl;
// }


//pass by refrence!!
#include <iostream>
using namespace std;
void callbyrefrence(int &a){
    a=20;
    cout<<a<<endl;
}
int main(){
    int a=10;
    callbyrefrence(a);
    cout<<a<<endl;
}