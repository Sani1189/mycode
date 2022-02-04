#include <bits/stdc++.h>
using namespace std;

void compareTriplets(int a[], int b[]) {
    
    int alice=0,bob=0;

    for(int i=0 ; i<3 ; i++)
    {
        if(a[i]>b[i])
        {
            alice++;
        }
        else if(a[i]<b[i])
        {
            bob++;
        }
    }
    cout<<endl;
    cout<< "Output: "<<alice <<" "<< bob;
}
int main()
{
    int a[3]={5,3,4};
    int b[3]={4,3,5};
    
    cout<<"Alice's triplet rating "<<endl;    
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    cout<<"Bob's triplet rating "<<endl;  
    for (int i = 0; i < 3; i++)
    {
        cout<< b[i]<< " ";
        
    }
    compareTriplets(a, b);
}
