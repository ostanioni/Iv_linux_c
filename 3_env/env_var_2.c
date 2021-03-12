#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
	if (argc < 2) {
		fprintf(stderr, "Usage: env_var_2 <variable>\n");
		return 1;
	}
	
	char * value;
	value = (char*) getenv(argv[1]);
	if (value == NULL)
		printf("%s not found\n", argv[1]);
	else 
		printf("%s=%s\n", argv[1], value);
	
	return 0;
}
