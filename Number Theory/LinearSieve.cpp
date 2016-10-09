#include <iostream>
#include <cstdlib>

using namespace std;

typedef unsigned long long int loong;

int main()
{
    loong n = 0;
    bool* S;
    cin>>n;
    S = new bool[n+1];
    loong q=1, p=2, x=1, i=1;
    for(i=2; i<=n; i++) S[i]=true;
    while(p*p<=n)
    {
        q = p;
        while(p*q<=n)
        {
            x = p * q;
            while(x<=n)
            {
                S[x] = false;
                x *= p;
            }
            while(!S[++q]); // next natural number greater than q in S
        }
        while(!S[++p]);
    }
    for(i=2; i<=n; i++) if(S[i]) cout<<i<<" ";

    return 0;
}
