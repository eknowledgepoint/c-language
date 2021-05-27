#include <stdio.h>
int main()
{
    int i = 1;
    int varTable;
    printf("Enter number for table:");
    scanf("%d", &varTable); 
    while (i <=10)
    {
        printf("%d\n", i*varTable);
        ++i;
    }

    return 0;
}
