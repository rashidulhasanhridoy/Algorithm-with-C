#include <stdio.h>

int binarySearch(int size, int array[], int searchKey){
    int left = 1, mid, right = size;
    while(left <= right){
        mid = (left + right) / 2;
        if(array[mid] == searchKey){
            return mid;
        }
        else if(array[mid] > searchKey){
            left = mid + 1;
        }

        else{
            right = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int size, searchKey, i, result;
    printf("Enter size of decreasing ordered array : \n");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d elements of decreasing ordered array : \n", size);
    for(i = 1; i <= size; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter search key : \n");
    scanf("%d", &searchKey);
    result = binarySearch(size, array, searchKey);
    if(result == -1){
        printf("%d not found!\n", searchKey);
    }
    else{
         printf("%d found at position %d!\n", searchKey, result);
    }
    return 0;
}


