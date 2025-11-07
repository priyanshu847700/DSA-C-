#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
 
int bioCoeff(int n,int r){
    int nFactorial=factorial(n);
    int rFactorial=factorial(r);
    int n_rFactorial=factorial(n-r);

    int ans=  nFactorial/(n_rFactorial * rFactorial);
    return ans;
}

int main(){
    cout<<bioCoeff(4,2)<<endl;
    return 0;
}
