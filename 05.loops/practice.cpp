// pattern 
// print square pattern
//        ****
//        ****
//        ****
//        ****
#include <iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"enter the val of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}





//print no. from n to 1 using for loop!!
#include <iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"enter the val of n : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
    return 0;
}




//print sum of digit of a num !!!
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the val of n : ";
    cin>>n;
    while(n>0){
        int dig=n%10;
        sum+=dig;
        n=n/10;
    }
    cout<<sum<<endl;
}






//print sum of odd digit of a num !!!
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the val of n : ";
    cin>>n;
    while(n>0){
        int dig=n%10;
        if(dig%2!=0){
            sum+=dig;
        }
        n=n/10;
    }
    cout<<sum<<endl;
}





//print reverse of a num !!!
#include <iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"enter the val of n : ";
    cin>>n;
    while(n>0){
        int dig=n%10;
        cout<<dig;
        n=n/10;
    }
    return 0;
}






#include <iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"enter the val of n : ";
    cin>>n;
    while(n>0){
        int dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    cout<<"reverse : "<<rev<<endl;
    return 0;
}






