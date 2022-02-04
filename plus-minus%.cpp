#include <bits/stdc++.h>

using namespace std;

void plusMinus(int arr[], int n)
{
    int plus=0,minus=0,zero=0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            plus++;
        }
        else if(arr[i]<0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    double proplus= (double)plus/n;
    double prominus=(double)minus/n;
    double prozeros= (double)zero/n;
    
    cout<<"Outputs:"<<endl;
    cout<<"proportion of positive values: "<< proplus<<endl;
    cout<< "proportion of negative values: "<< prominus<<endl;
    cout<<"proportion of zero values: "<< prozeros;
}

int main()
{
    int arr[]={2,0,-1,0,3,-3,4};
    int size=7;
    cout<<"Number of integers : " <<size<<endl;
    cout<<"The numbers are: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    plusMinus(arr,size);
}
  
