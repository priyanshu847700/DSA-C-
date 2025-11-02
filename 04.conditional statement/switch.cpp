#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter the day : "<<endl;
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"tuesday"<<endl;
        break;
    case 3:
        cout<<"wednesday"<<endl;
        break;
    case 4:
        cout<<"thusday"<<endl;
        break;
    case 5:
        cout<<"friday"<<endl;
        break;
    case 6:
        cout<<"saturday"<<endl;
        break;
    case 7:
        cout<<"Monday"<<endl;
        break;   
    default:
        cout<<"invalid day";
        break;
    }
}




//calculator!!

#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter the val of a : ";
    cin>>a;
    cout<<"enter the val of b : ";
    cin>>b;
    cout<<"enter the operator : "<<endl;
    cin>>op;
    switch (op){
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;   
    default:
        cout<<"invalid operation";
        break;
    }
}



