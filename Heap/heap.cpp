#include<iostream>

using namespace std;

class heap{
    public:
        int arr[100];
        int size;

        heap(){
            arr[0] = -1;
            size = 0;
        }

        void insert(int val){
            // increment the size to add new element
            size = size + 1;
            int index = size;
            // add the element to last
            arr[index] = val;

            // Put the element to its correct position
            while(index > 1){
                // Accessing the parent node
                int parent = index/2;

                // Checking if parent's value is less than it's child then swap and update the index
                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else{ // Else everything is on it's place
                    return;
                }
            }
        }

        void print(){
            cout<<"Max Heap: \t";
            for(int i = 1; i <= size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void deleteFromHeap(){
            if(size == 0){
                cout<<"Nothing to delete. "<<endl;
            }

            // Put last node element at root node. Swap last index and first index
            arr[1] = arr[size];

            // Remove last node
            size--;

            // Put the root node at the correct position.
            int index = 1;

            while(index < size){
                // Find out the left and right child of current node
                int leftIndex = 2*index;
                int rightIndex = 2*index+1;

                // Store the index to be swapped
                int swapIndex = index;

                // If parent's value is less than left child
                if(leftIndex <= size && arr[swapIndex] < arr[leftIndex])
                    swapIndex = leftIndex;
                
                // If parent's value is less than right child
                if(rightIndex <= size && arr[swapIndex] < arr[rightIndex])
                    swapIndex = rightIndex;

                // if index is not equal to swapIndex it means values need to be swaped
                if(swapIndex != index){
                    swap(arr[index], arr[swapIndex]);
                    index = swapIndex;
                }
                else{
                    return;
                }
            }

        }

        void heapify(int arr[], int n, int i){

            int largest = i;
            int left = 2 *i;
            int right = 2 * i + 1;
            
            if(left <= n && arr[largest] < arr[left])
                largest = left;
            
            if(right <= n && arr[largest] < arr[right])
                largest = right;
            
            if(largest != i){
                swap(arr[i], arr[largest]);
                heapify(arr, n, largest);
            }
        }

        void heapSort(int arr[], int n){
            int size = n;

            while(size > 1){
                swap(arr[1  ], arr[size]);
                size--;

                // pass last element to heapify as it is max-heap
                heapify(arr, size, n);
            }
        }
};

int main(){

    heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(20);
    // h.insert(100);
    // h.insert(120);
    // h.insert(30);
    // h.print();

    // cout<<"After deleting: "<<endl;
    // h.deleteFromHeap();
    // h.print();

    cout<<"Heafify: "<<endl;

    // heap creation
    int a[7] = {-1, 50, 55, 20, 100, 120, 30};
    int n = 6;

    for(int i = n/2; i > 0; i--){
        h.heapify(a, n, i);
    }

    // heap sort
    h.heapSort(a, n);

    cout<<"Printing max heap: ";
    for(int i = 1; i <= n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}