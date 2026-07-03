#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    string  rev = name;
    reverse(name.begin(),name.end());

    if(name == rev){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}