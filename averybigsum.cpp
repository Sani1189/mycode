#include <bits/stdc++.h>

using namespace std;

long aVeryBigSum(long arr[],int n) {
    long sum=0;
    for(int i=0 ; i<n; i++ ){
        sum+= arr[i];
    }
    return sum;
}

int main()
{
    long arr[]={10000,300000,6000,1,20000};
    int arr_size=5;
    //cin>>arr_size;
    cout<<"The numbers are: "<<endl;
    for(int i=0 ; i<arr_size; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    long sum = aVeryBigSum(arr,arr_size);
    cout<< "The sum is: " << sum;
}

