#include <bits/stdc++.h>
using namespace std;

int quicksort(int a[],int low,int high)
{
   int pivot=a[high];
   int i=(low-1);
   
   for(int j=low;j<=high-1;j++)
   {
       if(a[j]<=pivot)
       {
       
           i++;
           swap(a[i],a[j]);
           
       }
           
       
   }
   swap(a[i+1],a[high]);
   return (i+1);
}

void quick(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot=quicksort(a,low,high);
        
        quick(a,low,pivot-1);
        quick(a,pivot+1,high);
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
    
     quick(a,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
