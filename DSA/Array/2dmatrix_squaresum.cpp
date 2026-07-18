#include<bits/stdc++.h>
using namespace std;
int main(){
    int m = 3;
    int n = 3;
    int m1 = 0;int n1 = n - 1;
    int arr[m][n] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

    
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[m1][i];
        cout<<arr[m1][i]<<" ";
    }
    m1++;
    cout<<endl;
    for(int j=m1;j<m;j++){
        sum+= arr[j][n - 1];
        cout<<arr[j][n - 1]<<" ";
    }
    n1--;
    cout<<endl;
    for(int i=n1;i>=0;i--){
        sum+=arr[m - 1][i];
        cout<<arr[m - 1][i]<<" ";
    }
    cout<<endl;
    for(int j = m1;j<m - 1;j++){
        sum+=arr[j][0];
        cout<<arr[j][0]<<" ";
    }


    cout<<endl;
    cout<<sum;
}