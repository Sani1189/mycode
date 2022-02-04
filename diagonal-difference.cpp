#include <bits/stdc++.h>

using namespace std;


int diagonalDifference(int arr[][3], int size)
{
    int leftdsum=0,rightdsum=0;
    
    for(int i=0 ; i<size; i++ )
    {
        for(int j=0 ; j<size; j++ )
        {
            if(i==j)
            {
                leftdsum= leftdsum+arr[i][j];
            }
            if(i+j==size-1)
            {
                rightdsum= rightdsum+arr[i][j];
            }
        }    
    }
    //cout <<leftdsum <<" " <<rightdsum<<endl;
    
    int sum=leftdsum-rightdsum;
    return abs(sum);
}

int main()
{
    int arr[3][3]={{1,2,4},{4,0,6},{2,8,9}};
    int size=3;
    //cin>>size;
    cout<<"The matrix is: "<<endl;

    for(int i=0 ; i<size; i++ ){
        for(int j=0 ; j<size; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int result = diagonalDifference(arr,size);
    cout<<"The diagonal sum difference is : "<< result;
}
