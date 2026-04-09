#include <stdio.h>
#include <vector>

int arr_input(std::vector<std::vector<int>>& x, int r, int c)
{
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%i", &x[i][j]);
        }
    }
}
int main(void)
{
    int r1 = 0;
    int c1 = 0;
    int r2 = 0;
    int c2 = 0;
    printf("Enter the size of array1: ");
    scanf("%i", &r1);
    scanf("%i", &c1);
    printf("Enter the size of array2: ");
    scanf("%i", &r2);
    scanf("%i", &c2);
    if (r2 != c1)
    {
        printf("Error: The count of array1's columns ≠ The count of array2's rows.\n");
        return 0;
    }
    std::vector<std::vector<int>> arr1(r1, std::vector<int>(c1));
    std::vector<std::vector<int>> arr2(r2, std::vector<int>(c2));
    arr_input(arr1, r1, c1);
    arr_input(arr2, r2, c2);
    
}
