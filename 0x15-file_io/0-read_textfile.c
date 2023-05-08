#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read;
	ssize_t bytes_written;

    if (filename == NULL) {
        return 0;
    }

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0;
    }

    buf = malloc(sizeof(char) * (letters + 1));
    if (buf == NULL) {
        close(fd);
        return 0;
    }

    bytes_read = read(fd, buf, letters);
    if (bytes_read == -1) {
        close(fd);
        free(buf);
        return 0;
    }

    buf[bytes_read] = '\0';

    bytes_written = write(STDOUT_FILENO, buf, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read) {
        close(fd);
        free(buf);
        return 0;
    }

    close(fd);
    free(buf);

    return bytes_written;
}

