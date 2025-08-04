#include<stdio.h>
#include<limits.h>
int arr[]= {5,6,8,2,3,1,9,4,7,0};
int start =0; //starting of array
int end = 9; //ending of array
void Divide(int arr[], int start, int end){
    if(start<end){//because if start==end then it means only 1 element in array
        int mid = (start+ end)/2;
        Divide(arr, start, mid);
        Divide(arr, (mid+1), end);
        Merge(arr, start, mid, end);
    }

}
void Merge (int arr[], int start, int mid, int end){
    int length_of_left_array =mid-start+1; //length of left sub-array
    int length_of_right_array = end- mid; //length of right sub-array
    int left_array[length_of_left_array+1]; // dummy array for comparision
    int right_array[length_of_right_array+1];
    int i =0; //to compare the divided sub-array's element
    int j =0;
    for(int a=0;a<length_of_left_array;a++){ //to fill the exact same element as initial array in sub-arrays
        left_array[a]= arr[start+a];
    }
    for(int b =0;b<length_of_right_array;b++){
        right_array[b]=arr[mid+b+1];
    }
    left_array[length_of_left_array]=INT_MAX; //treating the last elements of sub-arrays as infinity
    right_array[length_of_right_array]= INT_MAX;
    for (int k = start;k<=end;k++){
        if(left_array[i]<=right_array[j]){ // to compare the smaller element and insert in the original array
            arr[k] = left_array[i];
            i++;
        }
        else{
            arr[k]= right_array[j];
            j++;
        }
    }

}
int main(){
    Divide(arr, start, end);
    for(int i =0; i< 10;i++){ // printing the sorted array
        printf("%d ", arr[i]);
    }
    return 0;
}
