// //Arithematic Operators
// //1.binary
// //2.uninary

// #include <iostream>
// using namespace std;
// int main(){

//     //binary
//     int a=4,b=2;
//     cout<<(a+b)<<endl;   //6
//     cout<<(a-b)<<endl;   //2
//     cout<<(a/b)<<endl;   //2
//     cout<<(a*b)<<endl;   //8
//     cout<<(a%b)<<endl;   //0

//     //uninary
//     cout<<a++<<endl;     //4      -> a=a+1.   // [post increment]
//     cout<<++a<<endl;     //6                  // [pre increment]

//     cout<<b--<<endl;     //2      -> b=b-1   // [post decrement]
//     cout<<--b<<endl;     //0                 // [pre decrement]
//     return 0;
// }



////assingment operators!!

// #include <iostream>
// using namespace std;
// int main(){

//     int a=4,b=2,c=6,d=8;
//     cout<<(a+=5)<<endl;   //9       a=a+5
//     cout<<(b-=2)<<endl;   //0       b=b-2
//     cout<<(c*=2)<<endl;   //12      c=c*2
//     cout<<(d/=2)<<endl;   //4       d=d/2

//     return 0;
// }





// //relational operators!!

// #include <iostream>
// using namespace std;
// int main(){

//     int a=4,b=2;
//     cout<<(a == b)<<endl;   //0 -> false
//     cout<<(a >= b)<<endl;   //1 -> true
//     cout<<(a <= b)<<endl;   //0 -> false
//     cout<<(a != b)<<endl;   //1 -> true
//     return 0;
// }




//logical operators!!

#include <iostream>
using namespace std;
int main(){

    int a=18,b=60;                    
    if((a>=18) && (a<=20)){        // && -> logical and (when both condn are true!!)
        cout<<"eligible"<<endl;
    }

    if((b>100) || (b>50)){         // || -> logical or (when one of the condn is true!!)
        cout<<"TRUE"<<endl;        
    }

    cout<<!(3==5)<<endl;         // ! -> logical not (convert true into false & vice-versa)

    return 0;
}