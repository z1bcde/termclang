#include <stdlib.h>
#include <stdio.h>

void readfile()
{
	FILE *fp;
	fp = fopen("./trans.txt", "r");
	
	if(fp == NULL)
		exit(0);
	char fstr[1000];

	while((fgets(fstr,1000, fp)) != NULL)
	{
		printf("%s\n", fstr);
	}
	fclose(fp);
}

int main()
{
	readfile();
	return 0;
}

