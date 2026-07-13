#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(40);
    st.push(70);


    cout<<"stack top is: "<<st.top();

    st.pop();

    cout<<"stack top is: "<<st.top();

    cout<<endl;
    if(st.empty()){
        cout<<"Stack is Empty";
    }
    else{
        cout<<"stack is not empty";
    }

}