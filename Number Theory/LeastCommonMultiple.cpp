#include <iostream>
#include <cstdlib>

using namespace std;

inline long long int gcd(int a, int b){
    while(b!=0){
        long long int temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    long long int a, b;
    cout<<"Input a b : ";
    cin>>a>>b;
    long long int lcm = (a*b)/gcd(a,b);
    cout<<"LCM("<<a<<","<<b<<") = "<<lcm<<endl;
    return 0;
}
