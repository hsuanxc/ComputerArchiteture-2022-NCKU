#include <stdio.h>
#include <stdlib.h>
typedef enum{false,true}bool;

bool  validMountainArray(int* arr, int arrSize){
    if (arrSize < 2) return false;
    int i = 0, status = 0;
    char *result = "";

    while(i < arrSize){
        if (arr[i] == arr[i+1]) 
            return false;
        if(arr[i] < arr[i+1]){
            status = 1;
        }
        else if(arr[i] > arr[i+1]){
            status = 2;
            if(status == 0) return false;
        }
        ++i;
    }
    if(status == 1) return false;
    return true;
}

int main(){
    int arrSize = 9;
    int a[9] = {2, 4, 7, 8, 10, 55, 48, 33, 2};
    int *arr = (int *)malloc(sizeof(int)*arrSize);
    arr = a;
    if (validMountainArray(arr, arrSize-1) == true)
        printf("true\n");
    else
        printf("false\n");
}
