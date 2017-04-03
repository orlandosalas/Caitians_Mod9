/*
 * =====================================================================================
 *
 *       Filename:  Caitians_Mod9_HW8_task1.c
 *       	Usage:  ./Caitians_Mod9_HW8_task1.c
 *    Description:  comparing strings for their characters
 *
 *        Version:  1.0
 *        Created:  04/02/2017 01:53:42 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Orlando Salas (), orlandosalas@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

#define SIZE 81;
/* Function Prototypes */
void Usage(char **info); // input : vector of strings, an array of strings
char *StringIn(char *string1, char *string2); // input: STRING POINTERS

/* Main Program */
int main(int argc, char *argv[])
{
	//char match[];
	char *fmatch; // dereference of address
	if (argc != 3 )// two input veri.
	{	
		Usage(argv); // taking in argv char strings
		exit(1);
	}
	else
	{
		//exit(2);
	fmatch = StringIn( argv[1] , argv[2] ); // ret of func is an address of a func
	printf("String Test: %s \n", fmatch);
	}
	return 0;
}


/* Function Defenitions */
void Usage(char **info)
{
	if( *(info + 1) == 0)
	{
		printf("\n\nMissing required parameters. Try typing '--help' in <str1>\n");
		printf("Usage: ./task1 <string1> <string2>\n");
		printf("Program will check to see string2 is found in string1\n");
		exit(1);
	}
	// test strcmp
	int test = strcmp( (*(info + 1)) , "--help" );
	//printf("Test value = %d\n",test);
	if ( test  == 0)// first str --help veri.
	{
		printf("\n\n ' Help info here '\n");
		printf("Usage: ./task1 <string1> <string2>\n");
		printf("Program will check to see string2 is found in string1\n");
	}
	else
	{
		printf("\n\nToo many parameters. Try typing '--help' in <str1>\n");
		printf("Usage: ./task1 <string1> <string2>\n");
		printf("Program will check to see string2 is found in string1\n");

	}
	return;
}

char *StringIn(char *string1, char *string2)
{
	/* Goal: locate address of string1 match */
	char *matchAddress = '\0'; // initialize NULL
	int s1size = strlen( string1 );
	int s2size = strlen( string2 );
	int test2;	
	//printf("String 1 val: %s\n", string1);
	//string1 = string1 + 1;
	//printf("String 1 val: %s\n", string1);
	//	while( string1) // while string 1 is true, repeat
//	{
	for(int i = 0; i < s1size; i++)
	{
		test2 = strncmp( string1, string2, s2size);
		if( test2 == 0)
		{
			matchAddress = string1; // sets the address of match to CharS
			//printf("\nGood string1 :%s\n", string1);
			break;
		}
		//printf("\nstring1 :%s\n", string1);
		string1 = string1 + 1;
	}
	//CharS1Address = '\0'; not necessary. You already copied the address of match. Null is included

	return matchAddress;
	//return *matchAd[];
}
