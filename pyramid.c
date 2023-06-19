#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printpuff(int b, int len) {
	for(int j = 0; j < b; ++j) {
		for(int i = 0; i <= len; ++i) {
			printf(" ");
		} 
	}
}

int main(int argc, char** argv) {
	if(argc < 3) {
		printf("Not enough args!");
		return -1;
	}

	int limit = atoi(argv[1]);
	char *n  = argv[2];
	int b = limit;
	for(int i = 0; i <= limit;) {
		printpuff(b/2, strlen(n));
		for(int j = 0; j <= i; ++j) {
			printf("%s ", n);
		}
		printpuff(b/2, strlen(n)+1);
		printf("\n");
		i += 2;
		b -= 2;
	}
	return 0;
}
