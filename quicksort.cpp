#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot=arr[e];
    int p=s;
    for(int i=s; i<e; i++){
        if(arr[i]<pivot){
            swap(arr[i],arr[p]);
            p++;
        }
    }
    swap(arr[p],arr[e]);
    return p;

}

void quicksort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);

}


int main() {
    int n=5;
    int arr[5]={5,4,3,2,1};

    quicksort(arr,0,n-1);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
