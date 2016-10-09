#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    double r=0;
    cout<<"Input difference between elements : ";
    cin>>r;
    double a1=0;
    cout<<"Input first element : ";
    cin>>a1;
    long long int n=0;
    cout<<"Input n : ";
    cin>>n;

    double an = a1 + (n-1)*r;
    double sum = (a1 + an)*n /2;

    cout<<"an = "<<a1<<"+"<<r<<"(n-1)"<<endl;
    cout<<"Sum(an,"<<n<<") = "<<sum<<endl;
    cout<<"n-th element : a"<<n<<" = "<<an<<endl;

    return 0;
}
