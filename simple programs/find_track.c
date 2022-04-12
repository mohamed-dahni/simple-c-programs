#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const char *DOSES[] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
	NULL
};

int main() {
	char str[80];
	printf("Enter the name of the track: ");
	scanf("%[^\n]%*c", str);
	
	int i = 0;
	while(DOSES[i] != NULL) {
		if(strstr(DOSES[i], str)) {
			printf("We found your track here is its name: %s\n", DOSES[i]);
			break;
		}
		i++;
	}

	return 0;
}