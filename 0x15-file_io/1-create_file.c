#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */

int create_file(const char *filename, char *text_content)
{
	char *buffer;
	int wc, fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

  if (text_content)
  {
    while (text_content[wc++])
			;
 
		if (wc != write(fd, text_content, wc))
			return (-1);
	}

close(fp);
return (1);
}
