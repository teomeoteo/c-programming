/* This is exercise 1-16 from the "The C Programming Language" book
 * The goal is to rewrite this program so it will:
 *    "correctly print the length of arbitrary 
 *    long input lines, and as much as possible
 *    of the text" 
*/

#include <stdio.h>

#define MAXLEN 15 // maximum line length

/* Function Declarations */

int compln(int *len, int *bestlen);
void stchar(char *line, int pos, int value);
void cpyln(char line[], char *bline);

int main()
{
	/* Variable Declarations */

	int len = 0;
	char line[MAXLEN] = {0};
	int c = 0; // getChar() storage

	for (int i = 0;
		(c = getchar()) != EOF;
		++i)
	{
		if (c != '\n') {
      if (i < MAXLEN) {
			  stchar(line, i, c);
      }
      else if (i == MAXLEN) {
        stchar(line, i, '\0');
      }
      ++len;
		}
		else if (c == '\n') {
      stchar(line, i, '\0');
      printf("The length of this line is: %d\n", len);
      len = 0;
      i = -1;
      printf("%s\n", line);
		}	
	}
}

void stchar(char *line, int pos, int value)
{
	line[pos] = value;
}
