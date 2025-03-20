#include <iostream>
#include <vector>
using namespace std;
void sortarray(vector<int>& arr, int size){
 int i,j;
 for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
 }
}
void binarysearch(int x, vector<int>& arr, int size){
    int i = 0;
    int j = size - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2; 
        if (arr[mid] == x) {
            cout << "Element found at index " << mid << endl;
            return;
        } else if (arr[mid] < x) {
            i = mid + 1;
        } else {
            j = mid - 1;
        }
    }
    cout << "Element not found" << endl; 
}

int main() {

vector<int>arr;
int size;
cout<<"Enter the size"<<endl;
cin>>size;
cout<<"Enter the  aray"<<endl;
for(int i=0;i<size;i++){
    int val;
    cin>>val;
    arr.push_back(val);
}
sortarray(arr,size);
int x;
cout<<"Enter the element to search"<<endl;
cin>>x;
binarysearch(x,arr,size);
    return 0;


}