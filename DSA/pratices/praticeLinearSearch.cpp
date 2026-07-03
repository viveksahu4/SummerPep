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
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i] == search){
            cout<<"element found at index: "<<i<<endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<-1;
    }

    return 0;
    
}