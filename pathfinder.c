/*
 Name: Tolaz Hewa
 Date: October 8, 2015
 Course: CPS305
 Professor: Denise Woit
 Project: Assignment 2
 Class: pathfinder.c
 Purpose: to find a path from the first to the last item in a vector.
 */
#include <stdio.h>
#include <stdlib.h>
#include "path.h"
#include "vector.h"

int AllPathsRec(int position, Vector *V, Path *P);

/*
 main method to execute the program
 */
int main(int argc, char *argv[]) {
    Vector V;
    Path P;
    VectorRead(&V);
    PathInit(&P, V.size);
    if(!(AllPathsRec(0, &V, &P))) printf("No Solution\n");
}
/*
 recursive function to find the path.
 */
int AllPathsRec(int position, Vector *V, Path *P) {
    int resultRight = 0, resultLeft = 0;
    if(position == V->size-1) {
        PathPrint(*P);
        PathRemoveEntry(P);
        return 1;
    }
    else {
        
        if(position + V->item[position] < V->size && PathCheck(P, position + V->item[position])) {
            PathAddEntry(P, position + V->item[position]);
            resultRight = AllPathsRec(position + V->item[position], V, P);
        }
        if(position - V->item[position] >= 0 && PathCheck(P, position - V->item[position])) {
            PathAddEntry(P, position - V->item[position]);
            resultLeft = AllPathsRec(position - V->item[position], V, P);
        }
        PathRemoveEntry(P);
        if(resultRight||resultLeft) return 1;
        else return 0;
    }
}