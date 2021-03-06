#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv []);
void openfail(char *s);
void readfail(char *s);
void writefail(char *s);
void closefail(int n);
void checkar(int n);
#endif
