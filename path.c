/*
 Name: Tolaz Hewa
 Date: October 8, 2015
 Course: CPS305
 Professor: Denise Woit
 Project: Assignment 2
 Class: path.c
 Purpose: these methods allow the user to navigate/edit the path taken.
 */
#include "path.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 initializes the vector.
 */
void PathInit(Path *P, int size) {
    P->sequence = (int*)malloc(sizeof(int)* size);
    P->size = 0;
}
/*
 Adds an entry
 */
int PathAddEntry(Path *P, int entry) {
    P->size++;
    P->sequence[P->size] = entry;
    return 1;
}
/*
 checks if that position is currently in the path
 */
int PathCheck(Path *P, int position) {
    int i;
    for(i = 0; i < P->size; i++)
        if(P->sequence[i] == position) return 0;
    return 1;
}
/*
 removes the last entry from the path
 */
int PathRemoveEntry(Path *P) {
    if(P->size < 1) return 0;
    P->size--;
    return 1;
}
/*
 prints the path to console
 */
void PathPrint(Path P) {
    int i;
    for(i = 0; i <= P.size; i++)
        printf("%d ", P.sequence[i]);
    printf("\n");
}