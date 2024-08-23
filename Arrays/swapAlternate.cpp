#include <iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i =0 ; i<size; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}


void swapAlternate(int arr[], int size){
for(int i =0 ; i<size;i+=2){
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
}
}

int main(){
    int even[8]= { 1,2,3,4,5,6,7,8};
    int odd[5]={67,89,56,46,34};

    swapAlternate(even, 8);
    printArray(odd,5);
    printArray(even,8);
    return 0;



}
