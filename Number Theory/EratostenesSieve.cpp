#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef long long int loong;

int main(){
    bool* S;
    loong n=0;
    cout<<"Input n : ";
    cin>>n;
    S = new bool[n+1];
    for(int i=2; i<n; i++){
        S[i]=true;
    }
    loong g = sqrt(n);
    loong multiplicity=0;
    for(int i=2; i<g; i++){
        if(S[i]==false) continue;
        multiplicity=i*i;
        while(multiplicity<=n){
            S[multiplicity] = false;
            multiplicity+=i;
        }
    }
    for(int i=2; i<n; i++){
        if(S[i]) cout<<i<<" ";
    }

    return 0;
}
