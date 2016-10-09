#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

/*
    Program generates even numbers in range [a.b]
*/

int main(){
    long long int a=0, b=0;
    cout<<"Input a b (separated with space) : ";
    cin>>a>>b;
    if(a>b) swap(a,b);
    for(int i = a; i<=b; i++){
        if(i%2==0) cout<<i<<" ";
    }
    return 0;
}
