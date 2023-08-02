#include<iostream>
using namespace std;
int LinearSearch(int n, int arr[], int key){
   for(int i=0; i<n; i++){
      if(arr[i]==key){
         return i;
      }
   }
   return -1;
}
 

 int main(){
    int array[4] ={10,20,40,50};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<size;
   int n;
   cout<<" Enter size of array :-\n";
   cin>>n;
   int arr[n];

   for(int i =0; i<n; i++){
      
      cin>>arr[i];
   }
   int key;
   cout<<" Element you want to find index\n";
cin>>key;
cout<<LinearSearch(n, arr, key);
 }
