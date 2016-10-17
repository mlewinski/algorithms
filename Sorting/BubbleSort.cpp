#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void BubbleSort(int A[], int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-1; j++)
        {
            if(A[j]>A[j+1]) swap(A[j],A[j+1]);
        }
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
