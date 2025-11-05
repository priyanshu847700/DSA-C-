//do-while loop!!
 
#include <iostream>
using namespace std;
int main(){
    int i=1,n=8;
    do{
        cout<<i<<" ";
        i++;
    }while (n>=i);
    return 0;
}



//break statement!!
#include <iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"enter the val of n : ";
    cin>>n;
    while(i<=n){
        if(i==5){
            break;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}





//practice Q
#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"enter number : ";
        cin>>n;
        if(n%10==0){
            break;
        }
        cout<<"you entered : "<<n<<endl;
    } while (true);
    return 0;
}





//continue statement -> skip iteration
#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i==5){
            continue;
        }
        cout<<i<<" "<<endl;
    }
    return 0;
}



//practice
#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"enter number : ";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"you entered : "<<n<<endl;
    } while (true);
    return 0;
}
