#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void SelectionSort(int A[], int n)
{
    int min = 0;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(A[j]<A[min]) min=j;
        }
        swap(A[min], A[i]);
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
    SelectionSort(tab, n);
    DisplayTab(tab,n);
    return 0;
}

