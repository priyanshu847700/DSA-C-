#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;        
    }
    return 0;
}


// // 1 1 1 1 
// // 2 2 2 2 
// // 3 3 3 3 
// // 4 4 4 4 






#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;        
    }
    return 0;
}


// // *
// // **
// // ***
// // ****




//// inverted triangle pattern!!
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;        
    }
    return 0;
}

// ****
// ***
// **
// *





//// half pyramid pattern!!
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;        
    }
    return 0;
}

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 





// character pattern!!
#include <iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;        
    }
    return 0;
}


// // A 
// // B C 
// // D E F 
// // G H I J 







// //hollow rectangle pattern!!
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        cout<<"*";       //1st star
        for(int j=1;j<=n-1;j++){
            if(i==1 || i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;         //last star
    }
    return 0;
}


// // *****
// // *   *
// // *   *
// // *****







//inverted and rotated half pyramid!!!
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// //    *
// //   **
// //  ***
// // ****





// //print floyd's traingle!!

#include <iostream>
using namespace std;
int main(){
    int n=5,num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}


// // 1 
// // 2 3 
// // 4 5 6 
// // 7 8 9 10 
// // 11 12 13 14 15 





//diamond pattern!!

#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int l=1;l<=i-1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<"*";
        }
        for(int l=1;l<=n-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *







// print butterfly pattern!!
#include <iostream>
using namespace std;
int main(){
    int n=15;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int l=1;l<=n-i;l++){
            cout<<" ";
        }
        for(int m=1;m<=i;m++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        for(int l=1;l<=n-i+1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *



