#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int str, int end, int mid) {  

    vector<int>temp;
    int i=str; int j=mid+1;

    while (i<=mid && j<=end)
    {
        if (arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;

    }
    for (int ind=0; ind<temp.size();ind++){
          arr[ind+str]=temp[ind];
    }   
}

void mergesort(vector<int>& arr, int str, int end) {
  
    if(str < end) {
        int mid = str + (end - str) / 2;
        mergesort(arr, str, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, str, end, mid);
    }
}



int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    mergesort(arr,0,arr.size()-1);

    for(int val: arr){
        cout<<val<<" ";
    }
        return 0;
}