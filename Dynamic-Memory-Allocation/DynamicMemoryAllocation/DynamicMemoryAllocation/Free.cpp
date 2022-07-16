//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int *ptr, *ptr1;
//	int index=0, numberOfitems = 5;
//
//	printf("Enter number of elements: %d\n", numberOfitems);
//	ptr = (int*)malloc(numberOfitems * sizeof(int));
//	ptr1 = (int*)calloc(numberOfitems, sizeof(int));
//
//	if (ptr == NULL || ptr1 == NULL) {
//		printf("Memory not allocated.\n");
//		exit(0);
//	}
//	else {
//
//		// Memory allocated
//		printf("Memory successfully allocated using malloc.\n");
//
//		// Memory released 
//		free(ptr);
//		printf("Malloc Memory successfully freed.\n");
//
//		// Memory allocated
//		printf("\nMemory successfully allocated using calloc.\n");
//
//		// Memory released
//		free(ptr1);
//		printf("Calloc Memory successfully freed.\n");
//	}
//
//	system("PAUSE");
//	return 0;
//}