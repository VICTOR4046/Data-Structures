// time complexity in Worst complexity: n^2
//Average complexity: o(n*log(n))
//Best complexity: o(n*log(n))

#include<iostream>
using namespace std;
void swap(int *xp,int *yp) // swapping two number 
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
int partion(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partion(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
 int number;
   cout<<"enter the number";
   cin>>number;
   int arr[number];
   for(int i=0;i<number;i++)
   {
       cin>>arr[i];
   }
   quickSort(arr,0,number-1);
   cout<<"Sorted Array using QuickSort:\n";
   printArray(arr,number);
    return 0;
}