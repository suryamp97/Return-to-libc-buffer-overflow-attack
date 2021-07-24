#include <stdio.h>
#include <string.h>

int func(FILE *input) {
	char buffer[17];
	fread(buffer, sizeof(char), 41, input);
	return 1;
}

int main(int argc, char *argv[]) {
	FILE *input = fopen("badfile", "r");
	func(input);
	printf("Success\n");
	return 1;
}

