# include <stdio.h>

main()
{	
	printf("Zadanie 1:\n");
	printf("Vvedite 7 elementov:\n");
	int *arr = new int[7];
	for (int i = 0; i < 7; i++)
    {
		scanf("%d", &arr[i]);
    }
	printf("Massiv:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%i ",arr[i]);
    }
    printf("\n\n");
	delete[] arr;
	
	printf("Zadanie 2:\n");
	int n;
	printf("Vvedite kolichestvo elementov:\n");
	scanf("%i",&n);
	printf("Vvedite %i elementov:\n",n);
	int *array = new int[n];
	for (int i = 0; i < n; i++)
    {
		scanf("%d", &array[i]);
    }
	printf("Massiv:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ",array[i]);
    }
	delete[] array;
}


