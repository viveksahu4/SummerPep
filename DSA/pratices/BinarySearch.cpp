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
    bool found  = false;
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end)/2;

        if(arr[mid] == search){
            cout<<mid;
            found = true;
            break;
        }
        else if(arr[mid] < search){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }

    if(!found){
        cout<<"Not Found";
    }
}