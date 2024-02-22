/*
 ============================================================================
 Name        : hello_world.c
 Author      : ivanovski
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <hworld.h>

static void lPrint(void)
{
	printf("!!!Hello World!!!"); /* prints !!!Hello World!!! */
}

int main(void) {
	lPrint();
	return EXIT_SUCCESS;
}
