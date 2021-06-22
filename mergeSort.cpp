#include <iostream>
using namespace std;

void merge(int arr[] , int s , int e){
    int mid = (s+e)/2;
    int i = s;   
    int k = s;
    int j = mid+1;

    int temp[100];

    while(i<=mid and j<=e){

        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        temp[k] = arr[i];
        k++;
        i++;
    }

     while(j<=e){
        temp[k] = arr[j];
        k++;
        j++;
    }

    // copy 
    for(int i = s ; i<=e ; i++){
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[] , int s , int e){
    if(s>=e){
        return;
    }
    
    int mid = (s+e)/2;

    mergeSort(arr , s , mid);
    mergeSort(arr , mid+1 , e);

    merge(arr , s , e);
}

int main() {
    int arr[]  = {5,6,1,2,4,0};
    
    mergeSort(arr , 0 , 5);

    for(int i = 0 ; i<6 ; i++){
        cout<<arr[i]<<" , ";
    }
}
