#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    long long int p, g;
    cin>>p;
    g = sqrt(p);
    bool f = true;
    for(int i=2; i<=g; i++){
        if(p%i==0){
            cout<<p<<" is not a prime number"<<endl;
            f = false;
            break;
        }
    }
    if(f) cout<<p<<" is a prime number"<<endl;

    return 0;
}
