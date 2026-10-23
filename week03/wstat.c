/* Rithvik Ballamudi, 400620595, October 2026
 *
 * wstat.c - reads the 3 numbers printed by wc (lines, words,
 * characters) from stdin and prints the average line length,
 * not counting the newline, rounded to 1 decimal place.
 */
#include <stdio.h>
#include <stdlib.h>
/* average_length
 * total_chars: number of characters reported by wc
 * total_lines: number of lines reported by wc
 * Returns the average characters per line minus 1 for the \n.
 */
double average_length(double total_chars, double total_lines) {
    double avg = total_chars / total_lines;
    avg = avg - 1;
    return avg;
}
/* main reads the wc output, checks it, and prints the average */
int main() {
    double lines = 0;
    double words = 0;   // read but not used in the calculation
    double chars = 0;
    int count = 0;      // how many numbers were read successfully
    count = count + scanf("%lf", &lines);
    count = count + scanf("%lf", &words);
    count = count + scanf("%lf", &chars);
    if (count != 3) {
        fprintf(stderr, "wstat: input must be the 3 numbers from wc\n");
        return EXIT_FAILURE;
    }
    if (lines <= 0) {
        fprintf(stderr, "wstat: no lines to average\n");
        return EXIT_FAILURE;
    }
    printf("%.1f\n", average_length(chars, lines));
    return EXIT_SUCCESS;
}
