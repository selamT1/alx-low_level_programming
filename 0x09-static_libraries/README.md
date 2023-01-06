project title - 0x09. C - Static libraries

Resources
Read or watch:

What Is A C Library? What Is It Good For?
Creating A Static C Library Using ar and ranlib
Using A C Library In A Program
What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)

Learning Objectives
General
What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm

Tasks
0. Create the static library libmy.a containing all the functions listed below:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
=========================================
Notice: Dont forget to push your main.h file to your repository.
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x09-static_libraries
File: libmy.a, main.h

1. Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
=====================================
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x09-static_libraries
File: create_static_lib.sh
