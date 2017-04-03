#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100;

void Usage(char **info);
void GetOptions();
void PrintOptions();

int main(int argc, char *argv[]);	
{
	char STRING[SIZE];

	if (argc != 1)
	Usage();
	else
	GetOptions();


}

void Usage(char **info)
{
		printf("Missing or wrong number of parameters\n");
		pringf("Usage: ./task2 [-p | -u | -l]\n");
		exit(1);
		return;
}

void GetOptions(char )

void PrintOptions()
{	
	gets(STRING);
	if (argv[1] == -p)
	p
