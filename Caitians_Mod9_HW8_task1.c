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

/* Function Prototypes */
void Usage(char **info);

/* Main Program */
int main(int argc, char *argv[])
{
	if (argc != 3 )// two input veri.
	{	
		Usage(argv); // taking in argv char strings
	}
	
	return 0;
}


/* Function Defenitions */
void Usage(char **info)
{
	// test strcmp
	int test = strcmp( (*(info + 1)) , "--help" );
	//printf("Test value = %d\n",test);
	if ( test  == 0 ) // first str --help veri.
	{
		printf("\n\n ' Help info here '\n");
		printf("Usage: ./task1 <string1> <string2>\n");
		printf("Program will check to see string2 is found in string1\n");
	  }	
	else
	{
		printf("\n\nMissing required parameters. Try typing '--help' in <str1>\n");
		printf("Usage: ./task1 <string1> <string2>\n");
		printf("Program will check to see string2 is found in string1\n");
	}
	return;
}

