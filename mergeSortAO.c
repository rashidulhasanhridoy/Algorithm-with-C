#include <stdio.h>
void merge_sort(int array[], int i, int j);
void merge(int array[], int i1, int j1, int i2, int j2);

int main()
{
    int i, size;
    printf("Enter the size of the array : \n");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d elements of the array : \n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Sorted array : \n");
    merge_sort(array, 0, size - 1);
    for(i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

void merge_sort(int array[], int i, int j)
{
    int mid;
    if(i < j)
    {
        mid = (i + j) /2;
        merge_sort(array, i, mid);
        merge_sort(array, mid + 1, j);
        merge(array, i, mid, mid +1, j);
    }
}

void merge(int array[], int i1, int j1, int i2, int j2)
{
    int temp[50], i = i1, j = i2, k = 0;
    while(i <= j1 && j <= j2)
    {
        if(array[i] < array[j])
        {
            temp[k++] = array[i++];
        }
        else
        {
            temp[k++] = array[j++];
        }
    }

    while(i <= j1)
    {
        temp[k++] = array[i++];
    }

    while(j <= j2)
    {
        temp[k++] = array[j++];
    }

    for(i = i1, j = 0; i <= j2; i++, j++)
    {
        array[i] = temp[j];
    }
}
