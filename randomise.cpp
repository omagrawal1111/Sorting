#include <bits/stdc++.h>
using namespace std;

int quick(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    
    for(int j=l;j<=h-1;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    
    return i+1;//index of pivot element
    
}
int randomize(int a[],int l,int h)
{
    int n=h-l+1;
    //generation the random index;
    
    int temp=rand()%n;
    
    swap(a[temp+1],a[h]);
    return quick(a,l,h);
    
}

void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int pivot_index=randomize(a,l,h);
        
        quicksort(a,l,pivot_index-1);
        quicksort(a,pivot_index+1,h);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    quicksort(a,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
