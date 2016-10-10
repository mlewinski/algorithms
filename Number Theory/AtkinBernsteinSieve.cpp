#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef unsigned long long int loong;

int main()
{
    loong n, g, x, y, xx, yy, z, i;
    bool* S;
    cin>>n;
    g=sqrt(n);
    S = new bool[n+1];
    for(i=5; i<=n; i++) S[i] = false;
    for(x = 1; x <= g; x++)
    {
        xx = x * x;
        for(y = 1; y <= g; y++)
        {
            yy = y * y;
            z = (xx << 2) + yy;
            if((z <= n) && ((z % 12 == 1) || (z % 12 == 5))) S[z] = !S[z];
            z -= xx;
            if((z <= n) && (z % 12 == 7)) S[z] = !S[z];
            if(x > y)
            {
                z -= yy << 1;
                if((z <= n) && (z % 12 == 11)) S[z] = !S[z];
            }
        }
    }
    for(i = 5; i <= g; i++)
        if(S[i])
        {
            xx = i * i;
            z = xx;
            while(z <= n)
            {
                S[z] = false;
                z += xx;
            }
        }
    cout<<"2 3 ";
    for(i=5; i<=n; i++) if(S[i]) cout<<i<<" ";

    return 0;
}
