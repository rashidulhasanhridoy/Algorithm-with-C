#include <stdio.h>
void insertion_sort(int array[], int size)
    {
        int i, j, item;
        for(i = 1; i < size; i++){
            item = array[i];
            j = i - 1;
            while(j >= 0 && array[j] > item){
                array[j + 1] = array[j];
                j = j - 1;
            }

            array[j + 1] = item;
        }
            for(i = 0; i < size; i++){
            printf("%d ", array[i]);
        }
    }


int main()
{
    int i, size;
    printf("Enter size of the array: \n");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d elements of the array: \n", size);
    for(i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    printf("Sorted array : ");
    insertion_sort(array, size);
    return 0;
}
