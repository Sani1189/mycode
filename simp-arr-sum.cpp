#include <iostream>

using namespace std;

int simpleArraySum(int arr[],int n) {
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[]={1,2,3,4,5,6}, size=6;
 
    //cin>>size;
    cout<<"The numbers are: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    int sum = simpleArraySum(arr,size);
    cout<<endl;
    cout<<"The sum is : "<<sum;
    return 0;
}
