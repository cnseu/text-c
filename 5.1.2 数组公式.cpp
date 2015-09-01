#include <stdio.h>
#define z 5
int main()
{
	int i;
	int student_age[z];

	for (i=0;i<z;i++)
	{
		printf("please input a student age:");
		scanf("%d",&student_age[i]);
	}
	for (i=0;i<z;i++)

		printf("%6d",student_age[i]);
		printf("\n");

	for (i=z;i>=0;i--)

		printf("%2d",student_age[i]);
		printf("\n");

	return 0; 
}
