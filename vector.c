/*
 Name: Tolaz Hewa
 Date: October 8, 2015
 Course: CPS305
 Professor: Denise Woit
 Project: Assignment 2
 Class: vector.c
 Purpose: methods to input the Vector
 */

#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

/*
 method that reads user input and puts it in to the vector.
 */
void VectorRead(Vector *V)
{
    char *buffer = (char*)malloc(sizeof(char) *128);
    int i;
    
    fgets(buffer, 128, stdin);
    V->size = (int)strtol(buffer, NULL, 10);
    V->item = (int*)malloc(sizeof(int) * V->size);
    
    fgets(buffer, 128, stdin);
    for(i = 0; i < V->size; i++)
        V->item[i] = (int)strtol(buffer, &buffer, 10);
}