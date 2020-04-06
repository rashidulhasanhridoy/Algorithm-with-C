#include <stdio.h>
void quick_short(int array[], int low, int high);
int partitions(int array[], int low, int high);

int main()
{
    int i, size;
    printf("Enter size of the array : \n");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d elements of the array : \n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Sorted array : \n");
    quick_short(array, 0, size - 1);
    for(i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

}

void quick_short(int array[], int low, int high)
{
    if(low >= high)
    {
        return;
    }

    int p = partitions(array, low,high);
    quick_short(array, low, p -1);
    quick_short(array, p+1, high);

}


int partitions(int array[], int low, int high)
{
    int pivot, i, j, t;
    pivot = array[high];
    for(i = low - 1, j = low; j < high; j++)
    {
        if(array[j] < pivot)
        {
            i++;
            t = array[i];
            array[i] = array[j];
            array[j] = t;
        }
    }

    t = array[i + 1];
    array[i + 1] = array[high];
    array[high] = t;

    return i + 1;
}
