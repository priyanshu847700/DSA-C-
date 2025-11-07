#include <iostream>
using namespace std;
void hellofxn(){
    cout<<"hello world"<<endl;
}
void nextfxn(){
    hellofxn();
    cout<<"work done"<<endl;
}
int main(){
    nextfxn();
    return 0;
}