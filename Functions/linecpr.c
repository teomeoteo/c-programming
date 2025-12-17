/*	Line Fighter		This Program should take in as input
 *      						a number of lines and output the
 *	      					longest line in the console
 *						
 *	Pseudo:
 *	
 *	1. Take in up to 10 lines with a maximum of 200 characters each
 *	2. Iterate through them and compare current line length with the previous
 *	   line length
 *	3. If the current line length is bigger than the previous, set the
 *	   previous line length to the current line length. Store the current line.
 *	4. Print the last remaining line.
*/

#include <stdio.h>

#define MAXLINE 5 // maximum input lines
#define MAXLEN 500 // maximum line length

/* Function Declarations */

int compln(int *len, int *bestlen);
void stchar(char *line, int pos, int value);
void cpyln(char line[], char *bline);

int main()
{
	/* Variable Declarations */

	int len = 0;
	int bestlen = 0;
	char line[MAXLEN] = {0};
	char bestline[MAXLEN] = {0};
	int c = 0; // getChar() storage
	int countln = 0;

	for (int i = 0;
		countln < MAXLINE 
		&& (c = getchar()) != EOF;
		++i)
	{
		// printf("Current i value: %d\n", i);
		if (c != '\n') {
			if (len < MAXLEN - 1) {
				stchar(line, i, c);
				++len;
				// printf("Current line value: %s\n", line);
				// printf("Current i value: %d\n", i);
			}
			else {
				printf("Please keep the lines shorter\n");
				return 1;
			}
		}
		else if (c == '\n') {
			int check = compln(&len, &bestlen);
			line[i] = '\0';
			if (check)
				cpyln(line, bestline);
				// printf("Current bestline value: %s\n", bestline);
			len = 0;
			i = -1;
			// printf("Current i value: %d\n", i);
			++countln;
		}	
	}

	printf("%s\n", bestline);
}

int compln(int *len, int *bestlen)
{
	if (*len > *bestlen) {
		*bestlen = *len;
		return 1;
	}
	else {
		return 0;
	}
}

void stchar(char *line, int pos, int value)
{
	line[pos] = value;
}

void cpyln(char line[], char *bline)
{
	int i = 0;
	for (; line[i] != '\0'; ++i) {
		bline[i] = line[i];
		printf("Put in char: %c\n", line[i]);
	}
	bline[i] = '\0';
}
