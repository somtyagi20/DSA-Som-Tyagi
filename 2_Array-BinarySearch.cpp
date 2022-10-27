//To implement binary search ,array must be sorted
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key,s,e,mid;
    cout<<"Enter element to be searched in array : ";
    cin>>key;
    
    s=0;
    e=n;
    while(s<=e){
        mid=(s+e)/2;
        if(key==arr[mid]){
            cout<<"Element found at index "<<mid<<endl;
            break;
        }else if(key<arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    if(s!=e){
        cout<<"Element does not found in  array"<<endl;
    }
return 0;
}
//Som Tyagi
