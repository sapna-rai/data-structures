#include <stdio.h>

int main() {
	int ch[4] = {1,2,4,5};
	int *pointer = ch;
	for(int i = 0; i < 4; i++) {
		printf("%d ", *(ch));
	}
	//printf("%ld\n", sizeof(ch)/sizeof(int));
	return 0;
}