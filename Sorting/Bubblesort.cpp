// time complexity of Bubble Sort worstcse O(n^2)
// average case of the bubble sort is o(nlogn)
#include<iostream>// bubble sort
using namespace std;
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
int main()
{
   int number; // enter the number of element in the array
   cout<<"enter the number";
   cin>>number;
   int arr[number];
   for(int i=0;i<number;i++)// store the element in the array
   {
       cin>>arr[i];
   }
   for(int i=0;i<number-1;i++)// algorithm for sorting the element it the array
   {
       for(int j=0;j<number-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
            swap(&arr[j],&arr[j+1]);// calling the function swap
           }
       }
   }
   cout<<"Bubble Sort";
   for(int i=0;i<number;i++)// print sorting element in array 
   {
       cout<<arr[i]<<" ";
   }
    return 0;
}