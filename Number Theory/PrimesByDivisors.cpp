#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    long long int n = 0;
    cout<<"Enter the amount of prime numbers to generate : ";
    cin>>n;
    long long int lp=0, p=3, d=0;
    bool prime = true;
    cout<<"2 ";
    while(lp+1 < n)
    {
        prime = true;
        for(d=2; d<=sqrt(p); d++)
        {
            if(p%d==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
            cout<<p<<" ";
            lp++;
        }
        p+=2;
    }
    cout<<endl;
    return 0;
}
