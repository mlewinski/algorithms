#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    long long int p, g;
    cin>>p;
    g = sqrt(p);
    while(p%2==0){
        cout<<"2 ";
        p/=2;
    }
    for(long long int i=3; i<=g; i+=2){
        while(p%i==0){
            cout<<i<<" ";
            p/=i;
        }
        if(p==1) break;
    }
    if(p>1) cout<<p<<" ";
    return 0;
}
