// Question:- Find the total number of pairs in the Array whose sum is equal to the given value x.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,7,1};
    int n =5;
    int target = 7;
    int pairs = 0;
    for(int i = 0; i<n; i++){
         for(int j=i+1; j<n; j++){
            if(arr[i]+ arr[j]==target){
                pairs++;
            }
         }
}
cout<<pairs<<endl;

// Question:- Count the number of triplets whose sum is equal to the x

int num[] = {3,1,2,4,0,6};
int key = 5;
int size = 6;
int triplets = 0;
for(int i=0; i<size; i++){
    for(int j = i+1; j<size; j++){
        for(int k = j+1; k<size; k++){
            if(num[i]+num[j]+num[k]== key){
                triplets++;
            }
        }
    }
}
cout<<triplets<<endl;

// Question:- Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

int array[]= {2,3,1,3,2,1,4};
int size1 = 7;
for(int i =0; i<size1; i++){
     for(int j = i+1; j<size1; j++){
        if(array[i]==array[j]){
            array[i] = array[j] = -1;
        }
     }
}
for(int i=0; i<size1; i++){
    if(array[i]>0){
        cout<<array[i]<<endl;
    }
}

// Question :- Find the second largest element in the Array

int val[] = {23,56,34,90};
int m = 4;
int max = 0;
for(int i=0; i<m; i++){
      if(val[i]>max){
        max = val[i];
      }
}
cout<<max;
return 0;
}