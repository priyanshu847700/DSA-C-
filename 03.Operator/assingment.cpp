#include <iostream>
using namespace std;
int main(){
    int x=2,y=5;
    int exp = (x * y / x);          //5
    int exp0 = (x * ( y / x ));     //4

    cout<<exp<<endl;
    cout<<exp0<<endl;


//--------------------------------------------------------   


    int x1=10,y1=5;

    int exp1 = ( y1 * ( x1 / y1 + x1 / y1 ) );       //20
    int exp2 = ( y1 * x1 / y1 + y1 * x1 / y1 );      //20
    
    cout<<exp1<<endl;
    cout<<exp2<<endl;


//------------------------------------------------------------ 


    int l=200,m=50, n=100;

    if( l > m && m > n ){
        cout<<"Hello \n";
    }
    if( n > m && n < l ){
        cout<<"C++ \n";                          //C++
    }
    if(( m + 200 ) <l && ( m + 150 ) <n){ 
        cout<<"Hello C++ \n";
    }

    return 0;
}