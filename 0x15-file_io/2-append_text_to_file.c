#include "main.h"

/**
 * append_text_to_file - appends txt @ end of a file.
 * @filename: points to the file name
 * @text_content: string to add to end of file
 *
 * Return: when function fails or filename is NULL - -1
 *         when the file is not existing user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int z, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
w = write(z, text_content, len);
z = open(filename, O_WRONLY | O_APPEND);
if (z == -1 || w == -1)
return (-1);
close(z);
return (1);
}
