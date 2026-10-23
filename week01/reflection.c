/* reflection.c - prints my info one word at a time,
 * then my reflection answers one line at a time.
 *
 * Rithvik Ballamudi, October 2026
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* print one word, flush it to the screen, then pause */
void word(const char *w) {
    printf("%s ", w);
    fflush(stdout);
    sleep(1);
}

/* print a full line, then pause */
void line(const char *text) {
    puts(text);
    sleep(2);
}

int main() {
    word("Rithvik");
    word("Ballamudi");
    printf("\n");
    word("Student");
    word("Number:");
    word("400620595");
    printf("\n");
    word("SFWRENG");
    word("2XC3");
    printf("\n\n");

    line("Q1: What is the most useful thing you've learned so far?");
    line("A1: Writing shell scripts and using chmod. Automating tasks like deltemp and controlling who can access my files will save me time on every project.");
    line("Q2: Is there anything you've learned that you don't think is useful? Why?");
    line("A2: Not really. Vim felt slow at first, but it is the only editor available on a server with no GUI, so I can see why it is worth knowing.");
    line("Q3: What are the advantages and disadvantages of using vim for coding?");
    line("A3: Vim is lightweight, works over SSH on any Linux machine, and is very fast once you know the shortcuts. However, it has a steep learning curve, the modes are confusing at first, and it has no built-in autocomplete or debugging.");
    line("Q4: What are the advantages and disadvantages of using VS Code for coding?");
    line("A4: VS Code has autocomplete, error highlighting, extensions, and a built-in terminal, which make coding much easier. However, it uses more memory, needs setup like the WSL extension, and is not available on a bare server.");

    return EXIT_SUCCESS;
}
