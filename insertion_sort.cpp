#include<iostream>

using namespace std;

void insertion(int* arr, int n){

    for(int j = 1; j < n; j++){
        int key = arr[j];
        int i = j-1;
        while(arr[i] > key && i>=0){

            arr[i+1] = arr[i];
            arr[i] = key;
            i--;
        }
    }
}

int main(){

    int arr[5] = {5,2,7,1,3};
    int n = 5;

    insertion(arr, n);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
