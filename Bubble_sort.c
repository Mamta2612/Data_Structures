#include<stdio.h>
#include<stdbool.h>
//bubble sort
int main(){
    int last_element=8;
    int arr[] = {59,76,32,48,19,24,11,85,1};
    bool swapped;
    do
    {
    swapped = false;
    int mediator;//to swap the left and right element
    for(int i =0;i<last_element;i++ ){
        if(arr[i]>arr[i+1]){//left element is greator then right element
            mediator = arr[i+1];
            arr[i+1]= arr[i];
            arr[i]= mediator;
            swapped = true;// the do-while loop will also get terminated if throughout the complete iteration of for loop no single item get swapped
        }
    }
    last_element--;
    } while (swapped);//with every completion of for loop once, we are fixing the position of last element in the unsorted array
    for(int i =0;i<9;i++){
        printf("%d ", arr[i]);
    }
}
