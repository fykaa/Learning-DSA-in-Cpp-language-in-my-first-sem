// #include<stdio.h>
// void display(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// //INSERTION: insert an element at index without disturbing the order!
// //arr[10]= {7,8,12,27,88}  inserting 5 at index 2 makes it arr[10]= {7,8,5,12,27,88}

// int insertion(int arr[], int capacity, int index, int element, int size){
//     if (size>=capacity)
//     {
//         printf("This is not possible because size of array is greator than capacity , so the address wont be available\n");
//         return -1;
//     }
//     for (int i = (size-1); i >= index; i--)
//     {
//         arr[i+1]= arr[i];
//     }
//     arr[index]= element;
// }
// int main()
// {
//     int arr[10]={7,8,12,27,88};
//     int element= 5, size = 5, capacity= 10, index = 2;
//     printf("-------------BEFORE INSERTION-------------\n");
//     display(arr, 5);
//     for (int i = 0; i < size; i++)
//     {
//         printf("\nAddress of %d is %d\n",arr[i], &arr[i]);
//     }
//     insertion(arr, capacity,index, element, size);
//     size+=1;
//     printf("\n-------------AFTER INSERTION-------------\n");
//     display(arr, 6);
//     for (int i = 0; i < size; i++)
//     {
//         printf("\nAddress of %d is %d\n",arr[i], &arr[i]);
//     }
//     printf("\n");
//     return 0;
// }




//BY ME DURING REVISION AFTER LEARNING DSA! WOOHOOO I IMPROVED SO SO MUCH!!!!
#include<stdio.h>
#include<stdlib.h>
void printArray(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\n");
}
void insertion(int *arr, int element, int index, int size){
    int x;
    for (int i = size; i < index+1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}
int main(){
    int A[] = {12,2,2,5,9,5,33,2};
    int size = sizeof(A) /sizeof(int);

    printArray(A, size);   
    insertion(A, 2345, 3, size);
    printArray(A, size);
    return 0;
}