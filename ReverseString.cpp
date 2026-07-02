#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    getline(cin, name);

    reverse(name.begin(),name.end());
    cout<<name;
}