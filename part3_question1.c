// Mandy Joseph SBU ID: 115442979

#include <stdio.h>
#include <stdlib.h>

#define MAX 32

int main () {
	char input[MAX];
	int len, i;
	
	printf("Please input a string: ");
	scanf("%s", input);
	
	for (i = 0; input[i] != '\0'; i++){
	}
	len = i;
	
	for (i = 0; i < len; i++) {
		printf("%s\n", input + i);
	}
	
}