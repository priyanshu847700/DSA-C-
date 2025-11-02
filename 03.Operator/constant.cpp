#include <iostream>
using namespace std;
int main(){
    const float PI=3.14;
    {
        int PI=4536;
        cout<<PI<<endl;
    }
    cout<<PI<<endl;
    return 0;
}