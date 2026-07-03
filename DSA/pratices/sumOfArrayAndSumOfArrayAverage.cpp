#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;int sum = 0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+= arr[i];
    }

    cout<<"Sum of array is: "<<sum<<endl;

    cout<<"Sum of array Average is: "<<(sum / n)<<endl;
}