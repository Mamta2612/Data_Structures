#include <stdio.h>
/* we can use malloc for dynamic arrays, but to keep the code basic i have used a sample array*/
int main() {
    int arr[] = {4,2,7,8,5,0,1};
    int key;
    for(int j =1;j<7;j++){
        key = arr[j];
        int i = j-1;
        while(i>(-1) && arr[i]>key){
            arr[i+1] = arr[i];
            i-=1;
        }
        arr[i+1]=key;
    } 
    for(int i = 0;i<7;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
