// Mandy Joseph SBU ID: 115442979

#include <stdio.h>
#include <stdlib.h>

#define LIM 32
// below function checks if the strings are the same or not
int my_strcmp (char s1[], char s2[]) {
	int i = 0;
	
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
		if (s1[i] != s2[i]){
			return 1;
		}
	}
	
	if (s1[i] == s2[i] == '\0') {
		return 0;
	}
}
// below function compares the first set of numbers of the string if they are equal.
int my_strncmp (char s1[], char s2[], int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		if (s1[i] != s2[i]) {
			return 1;
		}
	}
	return 0;
}
// below function copies the second string into the first one
char *my_strcpy (char s1[], char s2[]) {
	int i = 0; 
	
	while (s2[i] != '\0') {
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}

char *my_strcat (char st1[], char s2[]) {
	int i = 0, j = 0;
	
	while (st1[i] != '\0') {
		i++;
	}
	st1[i] = '\0';
	while (s2[j] != '\0') {
		st1[i] = s2[j];
		i++;
		j++;
	}
	st1[i] = '\0';

	
	return st1;
}
// below function stores the reversed second string into the first one
char *my_reverse (char s1[], char s2[]) {
	int i = 0, len;
	for (i = 0; s2[i] != '\0'; i++) {
	}
	len = i;

	for (i = 0; i <= len; i++) {
		s1[i] = s2[len - i - 1];
	} 
	s1[i] = '\0';
	
	return s1;
	
}


int main () {
	int n = 0;
	char str1[LIM], str2[LIM];
	printf("To end the task, input the character @ into the first string.\n");
	
	while (str1[0] != '@') {
		printf("String1: ");
		scanf("%s", str1); getchar();
		
		printf("String2: ");
		scanf("%s", str2); getchar();
		
		if (my_strcmp(str1, str2) == 0) {
			printf("The two strongs are the same.\n");
		} else if (my_strcmp(str1, str2) == 1) {
			printf("The two strings are different from each other.\n");
		}
		
		printf("Please enter the amount of characters you want to check for equality: ");
		scanf("%d", &n);
		
		if (my_strncmp(str1, str2, n) == 0) {
			printf("The first %d of characters in the strings are equal.\n", n);
		} else if (my_strncmp(str1, str2, n) == 1) {
			printf("There are differences between the first %d characters in the strings.\n", n);
		}
		
		printf("String2 has been copied into another string. It is: '%s'.\n", my_strcpy(str1, str2));
		
		printf("Please enter a new value for string1: ");
		scanf("%s", str1); getchar();
		printf("String2 appended on the end of string1 is: '%s'.\n", my_strcat(str1, str2));		
		printf("Please enter a new value for string1: ");
		char rev[32];
		scanf("%s", rev); getchar();
		my_reverse(str1, str2);
		printf("The reverse of String2 is: '%s'.\n", str1);
	}
}
