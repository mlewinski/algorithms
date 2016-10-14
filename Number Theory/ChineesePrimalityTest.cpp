#include <iostream>
#include <cstdlib>

using namespace std;

typedef unsigned long long int ulong;

ulong ModuloMultiplication(ulong a, ulong b, ulong n)
{
    ulong m=1, w=0;

    while(m)
    {
        if(b&m) w=(w+a)%n;
        a=(a<<1)%n;
        m<<=1;
    }
    return w;
}

ulong ModuloPower(ulong b, ulong n)
{
    ulong m=1,p=2,w=1;
    while(m)
    {
        if(b&m) w = ModuloMultiplication(w,p,n);
        p=ModuloMultiplication(p,p,n);
        m<<=1;
    }
    return w;
}

int main()
{
    ulong p=0;
    cin>>p;
    cout<<(ModuloPower(p,p) == 2 ? "Prime":"Not prime")<<endl;
    return 0;

}
