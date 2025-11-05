#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"enter the no. : ";
    cin>>n;
    if(n==0 || n==1){
        cout<<n<<" is not a prime no."<<endl;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<n<<" is not a prime no."<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<n<<" is a prime no."<<endl;
    }
    return 0;
}