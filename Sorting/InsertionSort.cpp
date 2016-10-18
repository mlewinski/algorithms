#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void InsertionSort(int A[], int n)
{
    int x = 0;
    int j = 0;
    for(int i=n-2; i>=0; i--){
        x = A[i];
        j=i+1;
        while((j<n) && (x>A[j])){
            A[j-1]=A[j];
            j++;
        }
        A[j-1]=x;
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
    InsertionSort(tab, n);
    DisplayTab(tab,n);
    return 0;
}

