#include <bits/stdc++.h>

using namespace std;

long long int birthdayCakeCandles(long long int arr[],long long int n)
{
   long long int max=arr[0], counter=0;
   
   for(int i=1; i<n; i++)
   {
      if(max<arr[i])
      {
         max=arr[i];
      }
   }
   for(int i=0; i<n; i++)
   {
       if(arr[i]==max)
       {
           counter++;
       }
   }
   return counter;
}

int main()
{
    long long int arr[]={6,6,1,3},n=4;
    //cin>>n;
    cout<< "Size: "<< n<<endl;
    cout<<"Inputs: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    long long int result = birthdayCakeCandles(arr,n);
    
    cout<<"Output: " <<result;

    return 0;
}
