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
        cout<<"nothing to delete" << endl;
        return;

    }
    arr[1]=arr[size];
    size--;

    int i=1;
    while(true){
        int lefti=2*i;
        int righti=2*i+1;

        if(lefti<=size && arr[i]<arr[lefti]){
            swap(arr[i],arr[lefti]);
            i=lefti;

        }else if(righti<=size && arr[i]<arr[righti]){
            swap(arr[i],arr[righti]);
            i=righti;
        }else{
            return;
        }

    }
    
}
void heapify(int arr[], int size,int index){
    int largest=index;
    int lefti=2*index;
    int righti=2*index+1;

    if(lefti<=size && arr[largest]<arr[lefti] ){
        largest=lefti;
    }
    if(righti<=size && arr[largest]<arr[righti]){
        largest=righti;
    }
    if(largest!=index){
        swap(arr[index],arr[largest]);
        heapify(arr,size,largest);
    }   

}
void heapsort(int arr[],int size, int index){
    
    while(size>1){
        swap(arr[1],arr[size]);
        size--;
        heapify(arr,size,1);
        
    }

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

    int arr[6]={-1,54,53,55,52,50};
    int n=5;

    for(int i=n/2; i>0;i--){
        h.heapify(arr,n,i);
    }
    cout<<" print array now"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    h.heapsort(arr,n,1);
    cout<<" print array now"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}