#include<iostream>
using namespace std;
// In binary search given array must be sorted.
int BinarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
     int mid = s =(e-s)/2;
    while(s<=e){
       
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
        
    }
    return -1;
}
int main(){
int size;
cout<<"Ente rsize of Array :-";
cin>>size;
int arr[size];
for(int i=0; i<size; i++){
    cin>>arr[i];
}
int key;
cout<<"Enter the value of key you want to find :- ";
cin>>key;
cout<<BinarySearch(arr,size, key);

}