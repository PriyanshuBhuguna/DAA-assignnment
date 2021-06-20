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
    for(int i = 0 ; i<n ; i++){

        if(arr[i] == key){
            cout<<key<<" found at: "<<i<<endl;
            return 0;
        }
    }
    cout<<"element not found"<<endl;
}
