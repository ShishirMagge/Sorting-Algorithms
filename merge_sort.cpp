#include<iostream>

using namespace std;

void merge(int* arr, int s, int e){

    int mid = (s+e)/2;

    int left_length = mid - s + 1;
    int right_length = e - mid;

    int *left_arr = new int[left_length];
    int *right_arr = new int[right_length];

    int left = 0;
    int right = 0;
    int main = s;

    for(int i=0; i<left_length; i++){
        left_arr[i] = arr[main++];
    }

    main = mid+1;
    for(int i=0; i<right_length; i++){
        right_arr[i] = arr[main++];
    }

    main = s;
    while(left < left_length && right < right_length){
        if(left_arr[left] < right_arr[right]){
            arr[main++] = left_arr[left++];
        }
        else{
            arr[main++] = right_arr[right++];
        }
    }

    while(left < left_length){
        arr[main++] = left_arr[left++];
    }

    while(right < right_length){
        arr[main++] = right_arr[right++];
    }
}

void mergeSort(int* arr, int s, int e){

    //base case
    if(s>=e)
        return;
    
    int mid = (s+e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main(){

    int arr[5] = {5,2,7,1,3};
    int n = 5;

    mergeSort(arr, 0, n-1);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
