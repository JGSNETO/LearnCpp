//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//
//
//	int* ptr;
//	int numberOfItems, i;
//
//
//	// Get the number of elements for the array
//	numberOfItems = 5;
//	printf("Enter number of elements: %d\n", numberOfItems);
//
//
//
//	ptr = (int*)calloc(numberOfItems, sizeof(int));
//
//
//	if (ptr == NULL) {
//		printf("Memory not allocated.\n");
//		exit(0);
//	}
//	else {
//
//
//		printf("Memory allocated using calloc.\n");
//
//
//		for (i = 0; i < numberOfItems; ++i) {
//			ptr[i] = i + 1;
//		}
//
//
//		printf("The elements of the array are: ");
//		for (i = 0; i < numberOfItems; ++i) {
//			printf("%d, ", ptr[i]);
//		}
//
//
//		numberOfItems = 10;
//		printf("\n\nEnter the new size of the array: %d\n", numberOfItems);
//
//
//		ptr = (int*)realloc(ptr, numberOfItems * sizeof(int));
//		printf("Memory successfully re-allocated using realloc.\n");
//
//
//
//		for (i = 5; i < numberOfItems; ++i) {
//			ptr[i] = i + 1;
//		}
//
//
//		printf("The elements of the array are: ");
//		for (i = 0; i < numberOfItems; ++i) {
//			printf("%d, ", ptr[i]);
//		}
//
//
//		free(ptr);
//	}
//
//	system("PAUSE");
//	return 0;
//}
