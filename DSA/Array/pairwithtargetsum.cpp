#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target = 5;
    int i = 0;
    int j = n - 1;

    while(i < j){
        if(arr[i] + arr[j] > target){
            j--;
            
        }
        else if( arr[i] + arr[j] < target){
            i++;

        }
        else{
            cout<<i<<" "<<j;
            break;
        }
    }

}