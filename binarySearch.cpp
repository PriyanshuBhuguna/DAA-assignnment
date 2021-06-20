#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    /**Taking input from user*/
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    /*print array*/

    int s = 0 ; int e = n-1;
    while(s<=e){

        int mid = (s+e)/2;

        if(key == arr[mid]){
            cout<<"found at: "<<mid<<endl;
            return 0;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }else if(key > arr[mid]){
            s = mid+1;
        }
    }
   
}
