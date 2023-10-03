#include<iostream>
#include<algorithm>

using namespace std;

void selection(int* arr, int n) {
    int i = 0;

    while(i < n) {

        int min = i;
        for(int j=i; j<n; j++){
            if(arr[j] < arr[min])
                min = j;
        }

        swap(arr[min], arr[i]);
        i++;
    }
}

int main(){

    int arr[5] = {5,2,7,1,3};
    int n = 5;

    selection(arr, n);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
