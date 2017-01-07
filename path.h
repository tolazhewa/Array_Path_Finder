/*
 Name: Tolaz Hewa
 Date: October 8, 2015
 Course: CPS305
 Professor: Denise Woit
 Project: Assignment 2
 Class: path.h
 Purpose: header for the path file that includes the struct "path" and all the prototypes for path.c
 */
#ifndef path_h
#define path_h

#include <stdio.h>
#include "vector.h"

/*
 path struct that represents the path taken.
 */
typedef struct {
    int size;
    int *sequence;
}Path;

int PathCheck(Path *P, int position);
void PathInit(Path *P, int size);
int PathAddEntry(Path *P, int entry );
int PathRemoveEntry(Path *P );
void PathPrint(Path P);

#endif /* path_h */
