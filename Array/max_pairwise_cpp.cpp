#include <iostream>
using namespace std;

long long int maxpair(long long int arr[],int n){
int i,j;
long long int a = arr[0],b = arr[1];
for(i = 0; i < n;i++){
    for(j = i+1;j<n;j++){
        if(arr[i]*arr[j]>a*b){
           a = arr[i], b = arr[j];
    }
}
}
cout<<a*b;

return 0;
}
int main()
{
    int n,i;
    long long int arr[100];
    cin >> n;
    for(i =0;i<n;i++){
        cin>>arr[i];
    }
    maxpair(arr,n);
    return 0;
}
