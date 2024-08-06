#include <stdio.h>
int main() 
{
    int a[100], i, n, item, beg, mid, end;

    printf("Enter the range of Array (max 100): ");
    scanf("%d", &n);
    
    if (n > 100 || n <= 0) 
    {
        printf("\nInvalid array size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("\nEnter the elements of Array (sorted): ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the element for searching: ");
    scanf("%d", &item);

    beg = 0;
    end = n - 1;

    while (beg <= end) 
    {
        mid = (beg + end) / 2;

        if (a[mid] < item) 
        {
            beg = mid + 1;
        } 
        else if (a[mid] == item) 
        {
            printf("\n%d is found at position %d!\n", item, mid + 1);
            return 0; 
        } 
        else 
        {
            end = mid - 1;
        }
    }

    printf("\nItem isn't found!\n");

    return 0;
}
