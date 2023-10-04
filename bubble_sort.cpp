#include<iostream>

using namespace std;

void bubble(int* arr, int n){

    int j = 0;
    while(j<n-1){
        int i = 0;
        while(i < n-1){
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
                }
            i++;
        }
        j++;
    }
}

int main(){

    int arr[5] = {5,2,7,1,3};
    int n = 5;

    bubble(arr, n);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
