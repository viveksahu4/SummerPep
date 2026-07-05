#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,2,3,3};
    unordered_map<int,int> mp;

    for(int i=0;i<5;i++){
        mp[arr[i]]++;
    }


    for(auto & i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}