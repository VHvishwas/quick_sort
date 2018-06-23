#include<iostream>
using namespace std;


void swap(int * a,int *b)
{
int t=*a;
*a=*b;
*b= t;
}

int partion(int*a,int l,int r)
{
     int pivot=a[r];
     int i=l-1;
   for(int j=l;j<r;j++)
    {
      if(pivot>=a[j])
        {
            i++;
            swap(&a[i],&a[j]);
        }
     }
    swap(&a[i+1],&a[r]);

      return (i+1);

}


void quick_sort(int *a,int l,int r)
{
if(l<r)
{
  int pi=partion(a,l,r);
   quick_sort(a,l,pi-1);
   quick_sort(a,pi+1,r);

}
}


int main()
  {
  cout<<"enter no of elments in an array"<<endl;
  int n;
  cin>>n;
  int a[n];
     for(int i=0;i<n;i++)
     {
      cin>>a[i];
     }

    quick_sort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }

   return 0;
  }
