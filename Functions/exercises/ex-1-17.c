/* The goal of this exercise is to modify the program so
 * it prints any line that's longer than 80 characters
 * (i changed it to longer than 10 since its easier to test)
*/

#include <stdio.h>

#define MAXLEN 50 // maximum line length
#define MINLEN 10 // maximum line length

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
      printf("The length of this line is: %d\n", len);
      if (len > MINLEN) {
        printf("%s\n", line);
      }
      len = 0;
      i = -1;
		}	
	}
}

void stchar(char *line, int pos, int value)
{
	line[pos] = value;
}
