/*element delete at begin */


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }


/*
    for(int i=0;i< n -1;i++){
        arr[i] = arr[i + 1];
    }

    n--;;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

*/



/*element delete at end*/
/*
n--;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
*/




/*element delete at specfic pos. */


int pos;
cin>>pos;

for(int i=pos;i<n - 1;i++){
    arr[i] = arr[i + 1];
}

n--;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}