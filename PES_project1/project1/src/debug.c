/**
 * @file debug.c
 * @brief This file contains a function print_memory() to print memory in hex when compile time switch is enabled in the makefile.
 *
 * @author Srikant Gaikwad, Santhosh Thumanapalli
 
 *
 */

 //***********************************************************************************
//Function Definitions
//***********************************************************************************
/******************************************************************//****
 * @brief print_memory()
 * This function takes a pointer to memory and prints hex output of bytes
 * @start Pointer variable pointing to the memory to be printed
 * @length Length of bytes to be printed
 * @return void
 ***********************************************************************/
#include"debug.h"
#ifdef VERBOSE
void print_memory(uint8_t* start,uint32_t length)
{
	uint32_t i;
	while(length != 0)
	{
		/* Print each byte of memory in Hexadecimal*/
		printf("The byte in hexadecimal %x \n ",*start);
		start++;
		length--;
	}
}
#else 
void print_memory(uint8_t* start,uint32_t length)
	{
		printf("NULL");
		
	}
#endif
