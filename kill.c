#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[]) {
	if(argc < 2) {
		error:	
		printf("usage: kill [pid]\n");
		exit(1);
	}
	for(int i = 1; i < argc; i++) {
		if(atoi(argv[i]));
		else goto error;
		if(kill(atoi(argv[i]), 15)) 
			perror("error");
		else 
			printf("%i killed\n", atoi(argv[i]));
	}
}
