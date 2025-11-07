// #include <iostream>
// using namespace std;

// bool isprime(int n){
//     for(int i=2;i*i<=n;i++){       
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true; 
// }
// void printprime(int n){
//     for(int i=2;i<=n;i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     printprime(100);
//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int c=1;
    while(c<=15){
        cout<< (c % 2 ==1 ? "****" : "++++");
        ++c;
    }
    cout<<endl;
}
