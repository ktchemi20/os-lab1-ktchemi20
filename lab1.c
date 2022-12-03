/*
 * Implement your solution in thi file
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lab1.h"


char* readString(char* file){

    char* pointer = malloc(MAX_LINE_LEN * sizeof(char));

    FILE* txt = fopen(file,"r");

    strcpy(pointer, fgets(pointer, MAX_LINE_LEN - 1, txt));

    fclose(txt);

    return pointer;

}

char* mysteryExplode(const char* str){

    int length = strlen(str) - 1;
    char* newString = calloc(((length * (length + 1))/ 2), 1);
    int count = 0;

    for(int i = 0; i < length; i++){

        for(int k = 0; k < i + 1; k++){

            strncat(newString, &str[k], 1);
        }
    }
    return newString;
}
