#include <iostream>
using namespace std;
void DecitoBin(int decNum)
{
    int n=decNum;
    int pow=1;
    int binNum=0;
    while(n>0){
        int rem=n % 2;
        binNum+=rem*pow;
        pow*=10;
        n=n/2;
    }
    cout<<binNum<<endl;
}
int main()
{
    DecitoBin(5);
    return 0;
}