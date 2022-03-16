//16.03.2022 LAB6 3.Soru

#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, *aptr;
	
	aptr=(int*)malloc(10*sizeof(int));
	aptr=realloc(aptr,20*sizeof(int));
	
	
	return 0;
}

