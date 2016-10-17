#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void BubbleSort(int A[], int n)
{
    bool p = true;
    for(int i = n-1; i>0; i--)
    {
        for(int j = 0; j<i; j++)
        {
            if(A[j]>A[j+1]) swap(A[j],A[j+1]);
            p = false;
        }
        if(p) break;
    }

}
void DisplayTab(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    srand(time(NULL));
    int n = 0;
    cin>>n;
    int* tab = new int[n];
    for(int i=0; i<n; i++)
    {
        tab[i]=rand()%10000;
    }
    DisplayTab(tab,n);
    BubbleSort(tab, n);
    DisplayTab(tab,n);
    return 0;
}
