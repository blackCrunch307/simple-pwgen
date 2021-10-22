#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if(argc==2) {
		char letters[26] = "qwertyuiopasdfghjklzxcvbnm";
		srand(time(NULL));
		for(int i=1; i<(atoi(argv[1]))+1; i++) {
			printf("%c", letters[rand()%26]);
		}
	printf("\n");
	}
	else {
		printf("USAGE: pwgen LENGTH\n");
		printf("LENGTH: length of the password to be generated\n");
	}
	return(0);
}
