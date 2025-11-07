#include <iostream>
using namespace std;
int main(){
    int x=5,y=10;
    int *ptr=&x,*ptr2=&y;
    ptr2=ptr;

    cout<<&x<<" = "<<ptr<<" = "<<ptr2;       //  0x16aee6d4c = 0x16aee6d4c = 0x16aee6d4c

}





#include <iostream>
using namespace std;
int main(){
    int x=5,y=10;
    int *ptr=&x,*ptr2=&y;
    ptr2=ptr;

    cout<<&x<<" = "<<ptr<<" = "<<ptr2;       //  0x16aee6d4c = 0x16aee6d4c = 0x16aee6d4c

}

