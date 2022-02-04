#include <bits/stdc++.h>

using namespace std;

void gradingStudents(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=40)
        {
            if(arr[i]%5>2)
            {
                arr[i]=arr[i]+(5-(arr[i]%5));
            }
        }
        else
        {
            if(arr[i]<40 && arr[i]>=38)
            {
                arr[i]=40;
            }
        }
    }
    cout<< "output: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main()
{
    int arr[]={38,83,67,61};
    int size=4;

    // cin>>size;
    cout<< "Size: "<< size<<endl;
    cout<<"Inputs: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    gradingStudents(arr,size);
}