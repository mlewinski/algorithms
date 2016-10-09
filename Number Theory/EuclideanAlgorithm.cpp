#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    long long int a=0, b=0;
    cout<<"A = ?, B = ? : ";
    cin>>a>>b;

    long long int tempA = a, tempB = b;

    while(a!=b){
        if(a<b) b-=a;
        else a-=b;
    }
    cout<<"Substraction : GCD("<<tempA<<","<<tempB<<") = "<<a<<endl;
    a = tempA;
    b = tempB;

    while(b!=0){
        long long int temp = b;
        b=a%b;
        a=temp;
    }
    cout<<"Modulo : GCD("<<tempA<<","<<tempB<<") = "<<a<<endl;
    return 0;
}
