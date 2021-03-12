#include <stdio.h>
#include <unistd.h>

extern char ** environ;

int main(int argc, char const *argv[])
{

	printf("Press <Enter> for continue:");
	int c;
	for (size_t i = 0; environ[i] != NULL; i++)
	{
			c = fgetc(stdin);
			if (c == 10)
			{
				printf("%s", environ[i]);
			}
	}					
	return 0;
}
