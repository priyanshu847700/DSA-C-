//print 1 to n natural no.
#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=5;i++){
        cout<<i<<" ";
    }
    return 0;
}


//print 5 time apna collage!!
#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=5;i++){
        cout<<"Apna College"<<endl;
    }
    return 0;
}




#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the val of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    return 0;
}



//sum of n natural no.
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the val of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of n number : "<<sum<<endl;
    return 0;
}
