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

int quicksort(int a[],int l,int h,int k)
{
    if(l<h)
    {
        int pivot_index=randomize(a,l,h);
        if(pivot_index==k)
        {
            return(a[pivot_index]);
        }
        if(k>pivot_index)
        {
        return  quicksort(a,l,pivot_index-1,k);
        }
        else
        {
          return quicksort(a,pivot_index+1,h,k);
        }
    }
}
double median(int a[],int n)
{
   
    int ans;
    sort(a,a+n);
    
    if(n%2!=0)
    {
    
     ans=(double)a[n/2];
    }
    else
    {
    ans= (double)(a[(n-1)/2]+a[n/2])/2.0;
    }
    cout<<ans<<endl;
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
    median(a,n);
   
    
    return 0;
}
