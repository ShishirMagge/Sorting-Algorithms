#include<iostream>
#include<algorithm>

using namespace std;

void quicksort(int* arr, int s, int e){

    // base case
    if(s>=e){
        return;
    }

    int partition = s;
    int count = 0;

    for(int i = partition+1; i<e; i++){
        if(arr[i] <= arr[partition]){
            count++;
        }
    }

    swap(arr[partition+count], arr[partition]);

    int left = s;
    int right = e;

    while(left < (s+count) && right > (s+count)){
        while(arr[left] < arr[partition]){
            left++;
        }
        while(arr[right] > arr[partition]){
            right--;
        }

        swap(arr[left], arr[right]);
    }

    quicksort(arr, s, partition-1);
    quicksort(arr, partition+1, e);

}

int main(){

    int arr[5] = {5,2,7,1,3};
    int n = 5;

    quicksort(arr, 0, n-1);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
