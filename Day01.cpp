#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"\n";
    int arr[size];
    cout<<"Enter the heigths : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max_area=-1;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            int temp=arr[i];
            if(arr[i]>arr[j]){
                temp=arr[j];
            }
            int section_area=temp*(j-i);
            if(section_area>max_area){
                max_area=section_area;
            }
        }
    }
    cout<<"\n"<<max_area<<"\n";
    return 0;
}
