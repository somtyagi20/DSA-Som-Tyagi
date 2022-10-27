#include<iostream>
using namespace std;

int main(){
    int n,key;
    cout<<"Enter size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of your Array : ";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<"Enter Element to be searched :";
    cin>>key;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element Found at index "<<i<<" in your array"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Element Not Found In This Array !!"<<endl;
    }
    return 0;
}
