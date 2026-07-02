#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int search;
    cin>>search;

    for(int i=0;i<n;i++){
        if(arr[i] == search){
            cout<<"Element found at index is: "<<i<<endl;
        }
    }

    cout<<"-1";
}