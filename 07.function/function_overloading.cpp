#include <iostream>
#include <cmath>
using namespace std;
int sum(int a,int b){
    cout<<a+b<<endl;
    return 0;
}
double sum(double a,double b){
    cout<<a+b<<endl;
    return 0;
}
int sum(int a,int b,int c){
    cout<<a+b+c<<endl;
    return 0;
}
double sum(double a,double b,double c){
    cout<<a+b+c<<endl;
    return a+b+c;
}
int main(){
    sum(3,4);
    sum(3.2,4.5);
    sum(3,4,5);
    sum(1.3,1.4,1.1);
    return 0;
}