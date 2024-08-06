#include<stdio.h>
int main()
{
    int a[100], i, n, item, found;
    printf("Enter the range of Array: ");
    scanf("%d",&n);
    
    printf("\nEnter the elements of Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the element for searching: ");
    scanf("%d",&item);
    
    found=0;
    for(i=0; i<n; i++)
        if(a[i] == item)
            found = 1;
        
    if(found == 0)
    {
        printf("\nItem isn't found!");
    }
    else
    {
        printf("\nItem is found!");
    }
    
    return 0;
}