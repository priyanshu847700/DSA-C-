#include <iostream>
#include <cmath>
using namespace std;
int product(int a,int b){
    int pro=a*b;
    return pro;
}
void iseven(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return -1;
    }
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
void isprime(int n){
    int flag=0;
    if(n==0 && n==1){
        cout<<"not a prime no."<<endl;
    }
    for(int i=2;i<=sqrt(n);i++){       //we can also use [i*i<=n] instead of sqrt() fxn
        if(n % i == 0){
            cout<<"not a prime no."<<endl;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"prime no."<<endl;
    }
}
int main(){
    cout<<product(2,4)<<endl;
    iseven(4);
    cout<<factorial(2)<<endl;
    isprime(6);
    return 0;
}



//stack memory!!




