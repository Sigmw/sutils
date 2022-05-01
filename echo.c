#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if(argc < 2) exit(0);
	int flag = strcmp(argv[1], "-n");
	int i = flag ? 1 : 2;
	for(; i < argc; i++) {
		printf("%s ", argv[i]);
	}
	if(flag) putchar('\n');
}
