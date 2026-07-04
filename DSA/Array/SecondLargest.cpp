#include<bits/stdc++.h> // 1 2 3 4 5 
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }


    if(secondlargest == INT_MIN){
        cout<<"No second largest element";
    }
    else{
        cout<<secondlargest;
    }

    return 0;

}