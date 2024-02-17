#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i= low-1;

    for(int j=low; j < high; ++j){
     if(arr[j] < pivot){
        ++i;
        swap(arr[i], arr[j]);
     }
    }

    swap(arr[i+1], arr[high]);
    return i + 1;

}

void quicksort(vector<int> & arr, int low, int high){
    if(low < high){
        int pivotIndex = partition(arr, low , high);

        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main(){
    int n;

    cout << "Enter the number of element:";
    cin >> n;

    vector<int> arr(n);

    cout<< "Enter the number of the array:";
    for(int i = 0; i<n; ++i){
        cout<<"Element" << i + 1<< ":";
        cin>>arr[i];
    }

    quicksort(arr, 0, n-1);

    cout << "Sorted array:";
    for(int i=0; i < n; ++i){
        cout<< arr[i]<< " ";
    }

    return 0;
}