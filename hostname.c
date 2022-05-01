#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char host[256];
	switch(argc) {
		case 1:
		gethostname(host, sizeof(host));
		printf("%s\n", host);
		break;
		case 2:
		if(sethostname(argv[1], strlen(argv[1]))) {
			perror("error");
		}
		break;
		default:
		printf("usage: hostname[host]\n");
		_exit(1);
		break;
	}
	

}
