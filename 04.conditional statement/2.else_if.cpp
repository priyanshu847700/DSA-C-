
#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks ";
    cin>>marks;
    if(marks>=90){
        cout<<"A"<<endl;
    }
    else if(marks>=80){
        cout<<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
    }
    return 0;
}






// //tax calculator
#include <iostream>
using namespace std;
int main(){
    int income;
    cout<<"enter your income : ";
    cin>>income;
    if(income<=500000){
        cout<<"tax : No tax"<<endl;
    }
    else if((income>500000) && (income<=1000000)){
        cout<<"tax : "<< (income*20)/100 <<endl;
    }
    else{
        cout<<"tax : "<<(income*30)/100 <<endl;
    }
    return 0;
}







//print largest of 3 number!!
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

