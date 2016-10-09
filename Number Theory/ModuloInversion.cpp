#include <iostream>
#include <cstdlib>

using namespace std;

typedef long long int loong;

int main(){

    loong u=1, x=0, a=0, b=0, w=0, z=0, q=0;
    cout<<"Input a b : ";
    cin>>a>>b;
    w = a;
    z = b;
    while(w!=0){
        if(w<z){
            q = u; u = x; x = q;
            q = w; w = z; z = q;
        }
        q = w/z;
        u -= (q*x);
        w -= (q*z);
    }
    if(z==1){
        if(x<0) x = x+b;
        cout<<"a*"<<x<<" mod "<<b<<" = 1"<<endl;
    }
    else cout<<a<<" does not have inversion modulo "<<b<<endl;


    return 0;
}
