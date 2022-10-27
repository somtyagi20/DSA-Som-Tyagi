//Selection Sort concept - Find the minimum element in the unsorted array and swap it with the first element of the unsorted array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,min,h;
    cout<<"Enter size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of your Array : ";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    min=INT_MAX;
    for(int k=0;k<n-1;k++){
        for(int i=k;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            h=i;
        } 
        }
           arr[h]=arr[k];
        arr[k]=min;
        min=INT_MAX;
         }
    // OR
    //   for(int s=0;s<n-1;s++){
    //     for(int t=s+1;t<n;t++){
    //         int temp;
    //         if(arr[t]<arr[s]){
    //             temp=arr[t];
    //             arr[t]=arr[s];
    //             arr[s]=temp;
    //         }
    //     }
    //   }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//-som tyagi
