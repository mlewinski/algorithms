#include <iostream>
#include <cstdlib>


using namespace std;

int main(){
    const int MAX = 5000;
    int P[MAX];
    long long int a=0,b=0,n=0;

    cout<<"Input a, b, n (separated by spaces) : ";
    cin>>a>>b>>n;

    if(n>MAX){ cout<<"n is too big (nmax = "<<MAX<<")!"<<endl; return -1;}
    for(int i = 0; i<n; i++) cin>>P[i];

    for(int i = a; i<=b; i++){
        for(int j = 0; j<n; j++){
            if(i%P[j]==0) cout<<i<<"|"<<P[j]<<" ";
        }
    }
    cout<<endl;
    //divisible by all divisors
    bool flag = false; //true if not divisible

    for(int i = a; i<=b; i++){
        flag = false;
        for(int j = 0; j<n && !flag; j++){
            if(i%P[j]!=0) flag = true;
        }
        if(!flag) cout<<i<<" ";
    }

    cout<<endl;
    //not divisible by any divisor from P
    flag = false; //true if divisible

    for(int i = a; i<=b; i++){
        flag = false;
        for(int j = 0; j<n && !flag; j++){
            if(i%P[j]==0) flag = true;
        }
        if(!flag) cout<<i<<" ";
    }
    return 0;
}
