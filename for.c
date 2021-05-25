#include <stdio.h>
int main()
{
    int i;
	int varTable;
    printf("Enter number for table:");
    scanf("%d", &varTable); 
    for (i=1; i<=10;i++)
    {
        printf("%d\n", i*varTable);
    }

    return 0;
}
