#include <iostream>
using namespace std;
void bintoDeci(int binNum)
{
    int n = binNum, decNum = 0;
    int pow = 1;

    while (n > 0)
    {
        int d = n % 10;
        decNum += d * pow;
        pow = pow * 2;
        n /= 10;
    }
    cout << decNum <<endl;
}
int main()
{
    bintoDeci(10);
    return 0;
}
