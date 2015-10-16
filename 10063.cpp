#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array_column_row, i, j;
    scanf("%d", &array_column_row);
    for (i=0; (0<array_column_row) && (array_column_row<50) && (i<array_column_row); i++){
        for(j=0; j<array_column_row; j++)
        {
            if(j==i)
                printf("  2");
            else if ( j == (i+1) || j == (i-1) )
                printf(" -1");
            else
                printf("  0");
        }
            printf("\n"); 
    }
    return 0;
}
