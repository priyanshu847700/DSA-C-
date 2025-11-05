// //while loop!!
#include <iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"enter the val of n : ";
    cin>>n;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
    return 0;
}


//sum of n natural no!
#include <iostream>
using namespace std;
int main(){
    int n,sum=0,i=1;
    cout<<"enter the val of n : ";
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"sum :"<<sum<<endl;
    return 0;
}