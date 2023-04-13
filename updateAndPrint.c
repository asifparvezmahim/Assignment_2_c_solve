#include <stdio.h>
int main()
{
    int size, n, i, index, value;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &index, &value);

    for (i = 0; i < size; i++)
    {
        if (i == index)
        {
            arr[i] = value;
            break;
        }
    }

    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}