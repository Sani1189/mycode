#include <iostream>
using namespace std;

void mergeNonDecreasing(int a[],int n,int m,int b[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            a[k]=a[i];
            i++;
        }
        else{
            a[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n){
        a[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        a[k]=b[j];
        j++;
        k++;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int nums1[n+m];
    int nums2[m];
    {
        int i;
        for (i = 0; i < n; i++) {
            if (i>=n){
                nums1[i] = 0;
            }
            else{
                cin >> nums1[i];
            }
        }
    }
    {
        int i;
        for (i = 0; i < m; i++) {
            cin >> nums2[i];
        }
    }
    mergeNonDecreasing(nums1, n, m, nums2);
    {
        int i;
        for (i = 0; i < n+m; i++) {
            cout << nums1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}