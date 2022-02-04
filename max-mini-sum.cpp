#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(long long int arr[],int n)
{
    long long int temp, min_sum=0, max_sum=0;
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        if(i!=0)
        {
            max_sum+=arr[i];
        }
        if(i!=n-1)
        {
            min_sum+=arr[i];
        }
        
    }
   cout<<"Output: "<< min_sum <<" "<< max_sum;
}

int main()
{
    long long int arr[]={1,2,3,4,5};
    int n=5;

    cout<< "Size: "<< n<<endl;
    cout<<"Inputs: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    miniMaxSum(arr,n);

    return 0;
}
