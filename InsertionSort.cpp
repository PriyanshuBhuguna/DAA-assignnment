#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int arr[n];
    for( int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    // int s = 0
    for(int i = 1 ; i<n ; i++){
        int e = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>e){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = e;
    } 

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" , ";
    }
}
