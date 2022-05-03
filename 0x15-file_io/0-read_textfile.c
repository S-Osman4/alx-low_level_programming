#include "main.h"
/**
* read_textfile -Function that reads a text file and prints it to the POSIX
* standard output
*@filename: name of the file to read
*@letters: number of letters should read and print
*Return: the actual number of letters it could read and print_
* .if the file can not be opened or read return 0
* .if filename is NULL return 0
*. if write fails or does not write expected amunt of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
