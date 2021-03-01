#include<bits/stdc++.h>
using namespace std;


void selectionsort(int a[],int n)
{
    int min_element;
    for(int i=0;i<n-1;i++)
    {
        min_element=i;
        
        for(int j=i+1;j<n;j++)
        
            if(a[j]<a[min_element])
            
                min_element=j;
               swap(a[i],a[min_element]);
            
        
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
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
