#include <iostream>
#include <vector>
using namespace std;

class heap {
public:
    int arr[100];
    int size;
heap(){
    arr[0]=-1;
    size=0;
    
}     
void insert(int val){

    size=size+1;
    int index=size;
    arr[index]=val;

    while(index>1){
        int parent=index/2;
        if(arr[parent]<arr[index])
        {
            swap(arr[parent],arr[index]);
            index=parent;
        }else {return;}
    }
}
void deleteheap(){
    if (size==0){
        cout<<"nothing to delete";
        return;

    }
    arr[1]==arr[size];
    size--;

    int i=1;
    while(i<size){
        int lefti=2*i;
        int righti=2*i+1;

        if(lefti<size && arr[i]<arr[lefti]){
            swap(arr[i],arr[lefti]);
            i=lefti;

        }else if(righti<size && arr[i]<arr[righti]){
            swap(arr[i],arr[righti]);
            i=righti;
        }else{
            return;
        }

    }
    return deleteheap();
}
void storesortheap() {
    
}
void print(){
    for (int i=1;i<=size;i++){
        cout<<arr[i]<<" ";   }}
};

int main(){
    heap h;
    h.insert(10);
    h.insert(55);
    h.insert(5);
    h.insert(35);
    h.insert(14);
  
   h.print();

    h.deleteheap();
    cout<<" "<<endl;
    h.print();
    return 0;
}