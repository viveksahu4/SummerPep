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

    int start = 0;
    int end = n - 1;
    bool found = false;
    while(start <= end){
        int mid = (start + end) / 2;

        if( arr[mid] == search){
            cout<<mid;
            found  = true;
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
        cout<< -1;
    }

    return 0;
}


















/*
class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        
        int s = 0;
        int e = arr.size() - 1;
        
        while( s <= e){
            int mid = (s + e) / 2;
            
            
            if(arr[mid] == k){
                return true;
            }
            else if(arr[mid] < k){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return false;
        
    }
};

*/