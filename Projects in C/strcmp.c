#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char key[] = "{your_flag}"; 
	char pass[100];
	int n = strlen(key);

	printf("Masukkan password: ");
	scanf("%s", pass);

	

	if (strcmp(pass, key) == 0 ) {
		puts("YESSSS GOT IT");
	} else {
		puts("NOOOOOOOO!");
	}
	return 0;
}

//compile : gcc -no-pie strcmp.c -o strcmp
