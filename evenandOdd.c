#include <stdio.h>
int main()
{
    int i, size, sumOdd = 0, sumEven = 0;
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven = sumEven + arr[i];
        }

        else
        {
            sumOdd = sumOdd + arr[i];
        }
    }

    printf("%d %d", sumEven, sumOdd);
    return 0;
}