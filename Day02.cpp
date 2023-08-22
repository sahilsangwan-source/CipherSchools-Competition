#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool findTriplets(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        while(l<=r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==0) return true;
            else if(sum>0) r--;
            else l++;
        }
    }
    return false;
}

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"\n"<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"\n"<<findTriplets(arr,size);

    return 0;
}

