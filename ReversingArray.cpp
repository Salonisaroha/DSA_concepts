#include<iostream>

using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    }

int main(){
    int arr[6] = {2,5,7,8,9,3};
    int num[5] = {3,4,5,6,7};
     reverse(arr, 6);
     reverse(num, 5);
     printArray(arr, 6);
     printArray(num, 5);

     return 0;
}