#ifndef __STRING_H__
#define __STRING_H__

#define NULL ((void *)0)

typedef size_t (unsigned int);

void  *memcpy(void *dest, const void *src, size_t num);
void  *memmove(void *dest, const void *src, size_t num);
char  *strcpy(char *dest, const char *src);
char  *strncpy(char *dest, const char *src, size_t num);

char  *strcat(char *dest, const char *src);
char  *strncat(char *dest, const char *src, size_t num);

int    memcmp(const void *ptr1, const void *ptr2, size_t num);
int    strcmp(const char *str1, const char *str2);
int    strcoll(const char *str1, const char *str2);
int    strncmp(const char *str1, const char *str2, size_t num);
size_t strxfrm(char *dest, const char *src, size_t num);

void  *memchr(const void *ptr, int value, size_t num); // value - unsigned char
char  *strchr(const char *str, int value);
size_t strcspn(const char *str1, const char *str2);
char  *strpbrk(const char *str1, const char *str2);
char  *strchr(const char *str1, int value);
size_t strspn(const char *str1, const char *str2);
char  *strstr(const char *str1, const char *str2);
char  *strtok(char *str1, const char *str2);

size_t memset(void *ptr, int value, size_t num);
char  *strerror(int errno);
size_t strlen(const char *str);

#endif
