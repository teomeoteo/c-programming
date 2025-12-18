/* The goal of this exercise is to modify the program so
 * it removes trailing blanks and tabs from each line
 * I also added removing unneeded tabs / spaces
*/

#include <stdio.h>

#define MAXLEN 20 // maximum line length

/* Function Declarations */

int compln(int *len, int *bestlen);
void stchar(char *line, int pos, int value);
void cpyln(char line[], char *bline);

int main()
{
	/* Variable Declarations */

	char line[MAXLEN] = {0};
	int c = 0; // getChar() storage
  int lvd = 0;

	for (int i = 0;
		(c = getchar()) != EOF
    && i < MAXLEN - 1;
		++i)
	{
		if (c != '\n') {
      stchar(line, i, c);
		}
		else if (c == '\n') {
      stchar(line, i, '\0');
      lvd = i - 1; // lvd = last valid index
      while (lvd >= 0 && (line[lvd] == '\t' || line[lvd] == ' ')) {
        line[lvd] = '\0';
        --lvd;
      }
      if (line[0] != '\0'){
        printf("[%s]\n", line);
      }
      i = -1;
		}	
	}
}

void stchar(char *line, int pos, int value)
{
	line[pos] = value;
}
