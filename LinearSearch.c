#include <stdio.h>
int main()
{
    int i, count = 0, result, size, searchKey;
    printf("Enter size of the array: \n");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d elements of the array: \n", size);
    for(i = 1; i <= size; i++){
        scanf("%d", &array[i]);
    }

    printf("Enter search key: \n");
    scanf("%d", &searchKey);

    for(i = 1; i <= size; i++){
            count++;
        if(searchKey == array[i]){
            printf("Result : Found!\n");
            printf("Location : %d\n", i);
            result = 0;
            break;
        }
    }

    if(result != 0){
        printf("Result : Not found!\n");
    }

    printf("Time Complexity : O(%d)\n", count);
    return 0;
}
