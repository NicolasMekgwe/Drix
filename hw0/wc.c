#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void wc ( FILE *infile, char *inname);

int
main (int argc, char *argv[]) {
    
    
}

void
wc( FILE *infile, char *inname) {
    int count=0;

file = fopen(FILE_READ, "r");
char w;

while((w = fget(infile)) != EOF){

    if( w != '' && w != \n){
        words++;
    }
    if( w != '' && w== \n){
        lines++;
    }
    if( w != \n && w == ''){
        spaces++;
    }
    
    
}
