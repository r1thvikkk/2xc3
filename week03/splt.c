/* Rithvik Ballamudi, 400620595, October 2026
 *
 * splt.c - splits standard input into words.
 * Reads one word at a time from stdin and prints each
 * word on its own line to stdout.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 500

/* print_word
 *
 * w: the word to print
 * Prints the word one character at a time, followed by a newline.
 */
void print_word(char *w) {
    int i = 0;
    while (i < strlen(w)) {
        printf("%c", w[i]);
        i++;
    }
    printf("\n");
}

/* main reads words until EOF and passes each one to print_word */
int main() {
    char buffer[MAX_LEN];   // holds the current word
    int status;             // return value from scanf

    status = scanf("%499s", buffer);
    while (status == 1) {
        print_word(buffer);
        status = scanf("%499s", buffer);
    }

    if (status == EOF) {
        return EXIT_SUCCESS;
    } else {
        fprintf(stderr, "splt: could not read input\n");
        return EXIT_FAILURE;
    }
}
