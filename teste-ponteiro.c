#include <stdio.h>
#include <stdlib.h>

int teste1() {
	int a;
	int *iptr;
	int *jptr;
	int *kptr;

	iptr = &a;
	jptr = iptr;
	kptr = jptr;

	*jptr = 666;
	printf("Value of A assigned from JPTR = %d\n", *jptr);
	*iptr = 333;
	printf("Value of A assigned from IPTR = %d\n", *iptr);
	//a = 2;
	printf("Value of A assigned from A = %d\n", a);
	printf("Value retrived from pointers IPTR and JPTR = %d %d\n", *iptr, *jptr);
	printf("Addresses from the IPTR, JPTR, and KPTR pointers = %p %p %p\n", iptr, jptr, kptr);
}

/* int dangling_pointer(int **iptr) {
	int a = 666;
	*iptr = &a;

	return 0;
}*/

int dangling_pointer(int **iptr) {
	int value_to_store = 69;

	if ((*iptr = (int *)malloc(sizeof(int))) == NULL) {
		return -1;
	}

	**iptr = value_to_store;

	return 0;
}

int main() {
	int b = 333;
	int *jptr = &b;

	printf("Pointer and value before the function execution = %p %d\n", jptr, *jptr);
	dangling_pointer(&jptr);
	printf("Pointer and value after the function execution = %p %d\n", jptr, *jptr);
}