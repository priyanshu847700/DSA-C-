#include <iostream>
using namespace std;
int sum(int a,int b){
    int s=a+b;
    return s;
}
int diff(int a,int b){
    int d=a-b;
    return d;
}
int main(){
    cout<<sum(5,4)<<endl;
    cout<<diff(5,4)<<endl;
    return 0;
}