#include "main.h"

/**
 * create_file - it creates a file 
 * @filename: filename
 * @text_content: it is content written on the file
 * Vitaleng
 *
 * Return: 1 if it is a success, -1 if isn't a success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;
	
	if (!filename == NULL)
		return (-1);

	if (text_content!= NULL)
	{
		for (len=0; text_content[len];)
			len++;
	}

	fd = oprn(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w  == -1)
		return (-1);

	close(fd);

	return (1)
}
