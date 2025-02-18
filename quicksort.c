#include <stdio.h>
void quicksort(int[], int, int);
int partition(int[], int, int);
void main()
{
    int n, a[10];
    printf("how many number you want to sort?\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the number:");
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
void quicksort(int a[], int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = partition(a, low, high);
        quicksort(a, low, partitionindex - 1);
        quicksort(a, partitionindex + 1, high);
    }
}
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

        temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}