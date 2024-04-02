// Mandy Joseph SBU ID: 115442979

#include <stdio.h>
#include <stdlib.h>

// below tells if the character is a letter
int my_isalpha (char ch) {
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
		return 1;
	} else {
		return 0;
	}
}
// below tells if the character is a digit
int my_isdigit (char ch) {
	if (ch >= '0' && ch <= '9') {
		return 1;
	} else {
		return 0;
	}
}
//below tells if the character is uppercase
int my_is_upper (char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return 1;
	} else {
		return 0;
	}
}
// below outputs the uppercase counterpart to a lowercase letter
char my_to_upper (char ch) {
	if (ch >= 'a' && ch <= 'z') {
		return ch - 'a' +'A';
	} else {
		return ch;
	}
}
// below gives the lowercase counterpart to an uppercase letter
char my_to_lower (char ch) {
	if (ch >= 'a' && ch <= 'z') {
		return ch + 32;
	} else {
		return ch;
	}
}


//now the main function

int main () {
	int t;
	char c;
	
	printf("To finish the task, input '@'.\n");
	while (c != '@') { // allows the program to run till the user is finished 
		printf("Enter a character: ");
		scanf("%c", &c); getchar();
		
		if (my_isalpha(c) == 1) {
			printf("%c is a letter.\n", c);
			if (my_is_upper(c) == 1) {
				printf("%c is an uppercase letter.\n", c);
				printf("The lowercase counterpart of %c is: %c.\n", c, my_to_lower(c));
			} else if (my_is_upper(c) == 0) {
				printf("%c is a lowercase letter.\n",c);
				printf("The uppercase counterpart of %c is: %c.\n", c, my_to_upper(c));
			}
		}
		if (my_isdigit(c) == 1) {
			printf("%c is a digit.\n", c);
		}
		if (my_isdigit(c) == 0 && my_isalpha(c) == 0){
			printf("The character %c is neither a letter or number.\n", c);
		}
	}
}

