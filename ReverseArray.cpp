//Revers the Array
#include<iostream>
using namespace std;

void reverseArray(int arr[] , int l , int r){
    while(l < r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    } 
}

void printArray(int arr[] , int n){
    cout<<"\nArray Elements : "<<endl;
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    int arr[100];
    cout<<"Enter the Array Size : ";
    cin>>n;
    cout<<"Enter the Array Elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printArray :
    printArray(arr,n);
    //Reversing the Array :
    reverseArray(arr,0,n-1);
    //Printitng the Array :
    printArray(arr,n);
    return 0;
}