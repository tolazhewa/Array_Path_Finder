/*
 Name: Tolaz Hewa
 Date: October 8, 2015
 Course: CPS305
 Professor: Denise Woit
 Project: Assignment 2
 Class: vector.h
 Purpose: header for the vector file that includes the struct "vector" and all prototypes for vector.c
 */
#ifndef vector_h
#define vector_h

#include <stdio.h>

/*
 struct that represents the vectors.
 */
typedef struct {
    int *item;
    int size;
} Vector;

void VectorRead(Vector *V);

#endif /* vector_h */
