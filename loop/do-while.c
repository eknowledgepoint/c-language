#include <stdio.h>
int main()
{
    int i = 1;
    int varTable;
    printf("Enter number for table:");
    scanf("%d", &varTable); 
    do
    {
        printf("%d\n", i*varTable);
        ++i;
    }while(i <=10);

    return 0;
}
