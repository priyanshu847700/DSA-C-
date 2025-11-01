#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the val of a : ";
    cin>>a;
    cout<<"enter the val of b : ";
    cin>>b;
    cout<<"enter the val of c : ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }   
    }
    else{
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
    return 0;
}