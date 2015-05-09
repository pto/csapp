#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int global_var = 0;

int main() {
	int local_var = 0;
	int *heap_var = malloc(sizeof(int));
	*heap_var = 0;
	char *library_var = strerror(0);
	printf("code:    %p\n" "global:  %p\n" "heap:    %p\n"
		   "library: %p\n" "local:   %p\n",
		   	main, &global_var, heap_var, library_var, &local_var);
	free(heap_var);
	return EXIT_SUCCESS;
}
