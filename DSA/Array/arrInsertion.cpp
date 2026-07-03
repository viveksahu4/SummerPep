/*element insert at beginning */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int value;
    cin>>value;

    /*
    for(int i= n;i>=0;i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = value;
    n++;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



*/


/*element insert at end */

/*
arr[n] = value;
n++;


for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


*/




/*element insert at spe. pos. */

int pos;
cin>>pos;
for(int i=n;i>=pos - 1;i--){
    arr[i] = arr[i - 1];
}
arr[pos - 1] = value;
n++;


for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
