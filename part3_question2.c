// Mandy Joseph SBU ID: 115442979

#include <stdio.h>
#include <stdlib.h>

#define MAX 32
// the below function will tell if there is a unique character in the selected element in string 1
void remove_char(char s1[], char s2[]) {
	int len1 = 0, len2 = 0, i = 0, j = 0, n = 0;

	for (i = 0; i < s1[i]; i++){
	}
	len1 = i;

	for (i = 0; i < s2[i]; i++){
	}
	len2 = i;

	for (i = 0; i < len1; i++) {
		for (j = 0; j < len2; j++) {
			if (s1[i] == s2[j]) {
				for (n = 0; n < len1; n++) {
					s1[n] = s1[n + 1];
				}
				len1--;
				i--;
			}
		}
	}

	s1[len1] = '\0';
}

int main () {
	char str1[MAX], str2[MAX];
	int i = 0;
	
	printf("String1: ");
	fgets(str1, MAX, stdin); 
	//scanf("%99s", str1); getchar();
		
	printf("String2: ");
	fgets(str2, MAX, stdin);
	
	remove_char(str1, str2);
	

	printf("%s", str1);
}




