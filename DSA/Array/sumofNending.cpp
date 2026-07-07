#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int Avg;
    int count  = 0;

    for(int i=1;i<=50;i++){
        int digit = i % 10;

        if(digit == n){
            sum += i;
            count++;
        }
    }
    Avg = sum / count;
    cout<<Avg;
}