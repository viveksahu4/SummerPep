#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;  // for user input 

    int arr[n]; // array create with n size and array name is arr
    for(int i=0;i<n;i++){
        cin>>arr[i];    //array user input with the help of cin
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";  // array print with the help of cout 
    }
}