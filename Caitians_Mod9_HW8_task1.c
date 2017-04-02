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
void Usage(void);

/* Main Program */
int main(int argc, char *argv[])
{

	Usage();
	return 0;
}


/* Function Defenitions */
void Usage(void)
{
	printf("Usage: ./task1 <string1> <string2>\n");
	printf("Program will check to see string2 is found in string1\n");
}

