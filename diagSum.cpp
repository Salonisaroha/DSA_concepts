#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    int sum1 = 0; 
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i==j){
               sum = sum + arr[i][j];
            }
            if((i + j)== 3){
                sum1 = sum1 + arr[i][j];
            }
        }
    }
        cout<<sum<<endl;
cout<<sum1<<endl;
}