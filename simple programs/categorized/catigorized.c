/* 
* This grogram is splitting a file content by the category
* that the user specify, and it acepts 5 arguments
* argv[1] = the text to look for, argv[2] the file name that it's gonna go in to 
* argv[3] = """""""""""""""""""", argv[4] """"""""""""""""""""""""""""""""
* argv[5] = the rest of the content
*/  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

    if(argc != 6) {
        fprintf(stderr, "You have to give 5 arguments!\n");
        return 1;
    }

    char line[80];

    FILE* in; // check if there is a problem with opening a data stream
    if( !(in = fopen("spooky.csv", "r")) ) {
        fprintf(stderr, "Can't open the file\n");
        return 2;
    }

    FILE* f1; // check if there is a problem with opening a data stream
    if( !(f1 = fopen(argv[2], "w")) ) {
        fprintf(stderr, "Can't open the file\n");
        return 3;
    }

    FILE* f2; // check if there is a problem with opening a data stream
    if( !(f2 = fopen(argv[4], "w")) ) {
        fprintf(stderr, "Can't open the file\n");
        return 4;
    }

    FILE* f3; // check if there is a problem with opening a data stream
    if( !(f3 = fopen(argv[5], "w")) ) {
        fprintf(stderr, "Can't open the file\n");
        return 5;
    }

    while( fscanf(in, "%79[^\n]\n", line) == 1 ) {
        if( strstr(line, argv[1]) ) {
            fprintf(f1, "%s\n", line);
        } else if( strstr(line, argv[3]) ) {
            fprintf(f2, "%s\n", line);
        } else {
            fprintf(f3, "%s\n", line);
        }
    }

    fclose(in);
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}