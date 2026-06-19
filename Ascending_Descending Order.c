#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main()
{

	int i, Size, j, Temp;
	
	printf("\n Enter the size of the array: \n");
	scanf("%d", &Size);

	int* T =  calloc(Size, sizeof(int));

	if (T == NULL)
	{
		printf("\n Memory not allocated. \n");
		exit(0);
	}

	printf("\n Enter the elements of the array: \n");

	for (i = 0; i < Size; i++)
	{
		printf("\n Element %d: \n", i + 1);
		scanf("%d", (T + i));

	}


	for (i = 0; i < Size; i++)
	{

		for (j = i + 1; j < Size; j++)
		{
			if (*(T + i) > *(T + j))
			{
				Temp = *(T + i);
				*(T + i) = *(T + j);
				*(T + j) = Temp;
			}

		}


	}

	printf("\n The Array in Ascending Order is: \n");
 
	 for ( i = 0 ; i < Size ; i++)
		 printf("\n Element %d: %d \n", i + 1, *(T + i));



	 for (i = 0; i < Size; i++)
	 {

		 for (j = i + 1; j < Size; j++)
		 {
			 if (*(T + i) < *(T + j))
			 {
				 Temp = *(T + i);
				 *(T + i) = *(T + j);
				 *(T + j) = Temp;
			 }

		 }


	 }

	 printf("\n The Array in Descending Order is: \n");

	 for (i = 0; i < Size; i++)
		 printf("\n Element %d: %d \n", i + 1, *(T + i));



	 free(T);




	return 0;
}
