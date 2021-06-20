#include <bits/stdc++.h>
using namespace std;

int partation(int arr[] , int s , int r){
    int pivot = arr[r];
    int i = s-1;
    int j = s;

    for(; j<r ; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[r]);
    return i+1;
}


void quickSort(int arr[] , int s , int r){
    if(s>=r){
        return;
    }

    int pivot = partation(arr , s , r);
    quickSort(arr , s , pivot-1);
    quickSort(arr , pivot+1 , r);
    
}

int main() {
    int arr[] = {0 , 6 , 50 , 01 , 80 , 12 , 14 , 7};
    int n = 8;
    // int s = 0
    quickSort(arr , 0 , n-1);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<",";
    }
}
