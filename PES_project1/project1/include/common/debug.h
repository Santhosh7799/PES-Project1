/**
* @file debug.h
* @brief An abstraction for printing memory through function print_memory()
*
* This header file provides an abstraction of memory printing via function calls.
*
* @author Srikant Gaikwad,Santhosh Thumanapalii
* @date October 2, 2017
*
*/
#ifndef __DEBUG_H__
#define __DEBUG_H__

#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>

//***********************************************************************************
// function prototypes
//***********************************************************************************
/******************************************************************//****
 * @brief print_memory()
 * This function takes a pointer to memory and prints hex output of bytes
 * @start Pointer variable pointing to the memory to be printed
 * @length Length of bytes to be printed
 * @return void
 ***********************************************************************/
void print_memory(uint8_t* start, uint32_t length);

#endif /* __DEBUG_H__ */
