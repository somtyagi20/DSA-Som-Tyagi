//Bubble Sort Concept - Repeatedly swap two adjacent elements if they are in wrong order(means (left>right for sorting in increasing order)
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of your Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=1;j<n;j++){
        for(int i=0;i<n-i;i++){
        int temp;
        if(arr[i]>arr[i+1]){
             temp=arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
        }
      }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//-Som Tyagi
