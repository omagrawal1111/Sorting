#include <bits/stdc++.h>
using namespace std;


void insertionsort(int a[],int n)
{
    int key;
    for(int i=1;i<n;i++)
    {
        key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];//here we have moved element one position ahead of their current position
            j--;
        }
        a[j+1]=key;
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
    
    insertionsort(a,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
