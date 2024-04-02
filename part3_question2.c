// Mandy Joseph SBU ID: 115442979

#include <stdio.h>
#include <stdlib.h>

#define MAX 32
// the below function will tell if there is a unique character in the selected element in string 1
int unique_char (char ch1, char s2[]) {
	int i = 0;
	
	for (i = 0; s2[i] != '\0'; i++) {
		if (ch1 != s2[i]) {
			return 1;
		}
	}
	return 0;
}

int main () {
	char str1[MAX], str2[MAX];
	int i = 0;
	
	printf("String1: ");
	scanf("%s", str1); getchar();
		
	printf("String2: ");
	scanf("%s", str2); getchar();
	
//	for (i = 0; str1[i] != '\0'; i++) {
//		if (unique_char(str1[i], str2) == 1) {
//			printf("%c", str1[i]);
//		}
//	}
	
}
