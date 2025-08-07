#include<stdio.h>
//quick sort algorithm with 1 element as pivot
int end = 9;
int arr[] ={6,5,10,11,9,8,4,1,2,3};
void Quick_sort(int arr[], int start, int end){
    int fixed;
    // Base condition: if the segment has more than 1 element
    if (start<end){
         // Partition the array and get the pivot index (element placed at its correct position)
        fixed = Partition(arr, start, end);
        // Recursively sort elements before and after the pivot
        Quick_sort(arr, start, fixed-1);
        Quick_sort(arr, fixed+1, end);
    }
}
// Partition function: places pivot in correct position, and rearranges elements
int Partition(int arr[], int start,int end){
    int pivot = arr[start];// Choose the first element as pivot
    int temp ;
    int i = start; // i points to the last element less than pivot
    int j = i+1;
    // Traverse the rest of the array
    for(j= start+1;j<=end;j++){
        if(arr[j]<pivot){
            // If current element is smaller than pivot
            i++;// Increase i to expand the "less than pivot" zone
            // Swap arr[j] with arr[i] to move smaller element to correct side
            temp = arr[j];
            arr[j]=arr[i];
            arr[i]= temp;
        }
    }
    // Finally, place pivot in its correct position by swapping with arr[i]
    temp = arr[i];
     arr[i]= pivot;
    arr[start] = temp;
    return i;
}
int main(){
    Quick_sort(arr,0,9);
    for(int i =0; i<=9;i++){
        printf("%d ",arr[i]);
    }
}
