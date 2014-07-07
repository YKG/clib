#include "string.h"

void  *memcpy(void *dest, const void *src, size_t num)
{
	size_t i;

	for (i = 0; i < num; i++)
	{
		*((char *)dest + i) = *((char *)src + i);
	}
	return dest;
}

void  *memmove(void *dest, const void *src, size_t num)
{
	size_t i;

	if (dest <= src || dest - src >= num)
	{
		for (i = 0; i < num; i++)
		{
			*((char *)dest + i) = *((char *)src + i);
		}
	}else{
		for (i = num; i >= 0; i--)
		{
			*((char *)dest + i) = *((char *)src + i);
		}
	}
	return dest;
}

char  *strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	return dest;
}

char  *strncpy(char *dest, const char *src, size_t num)
{
	size_t i;

	for (i = 0; i < num && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	return dest;
}

char  *strcat(char *dest, const char *src)
{
	char *p, *q;

	p = dest;
	q = src;
	while(*p != '\0')
		p++;
	while((*p++ = *q++) != '\0')
		;
	*p = '\0';

	return dest;
}

char  *strncat(char *dest, const char *src, size_t num)
{
	size_t i;
	char *p, *q;

	p = dest;
	q = src;
	while(*p != '\0')
		p++;
	for (i = 0; i < num && *q != '\0'; i++)
	{
		*p++ = *q++;
	}
	*p = '\0';
	
	return dest;
}

/*
 * unsigned char ?
 */
int    memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	int i;
	for (i = 0; i < num; ++i)
	{
		if (*((unsigned char *)ptr1 + i) != *((unsigned char *)ptr1 + i))
		{
			break;
		}
	}
	return *((unsigned char *)ptr1 + i) - *((unsigned char *)ptr1 + i);
}

int    strcmp(const char *str1, const char *str2)
{
	char *p1, *p2;

	p1 = str1;
	p2 = str2;
	while(*p1 != '\0' && *p2 != '\0'){
		if (*p1 != *p2)
			break;
		p1++;
		p2++;
	}
	return *p1 - *p2;
}

int    strcoll(const char *str1, const char *str2);

/*
 * If num == 0, what should be the return value?
 *   SHOULD RETURN 0!
 */
int    strncmp(const char *str1, const char *str2, size_t num)
{
	char *p1, *p2;

	if (num == 0)
		return 0;

	p1 = str1;
	p2 = str2;
	while(p1 - str1 < num && *p1 != '\0' && *p2 != '\0'){
		if (*p1 != *p2)
			break;
		p1++;
		p2++;
	}
	return *p1 - *p2;
}

size_t strxfrm(char *dest, const char *src, size_t num);

void  *memchr(const void *ptr, int value, size_t num)// value - unsigned char
{
	int i;
	for (i = 0; i < num; i++)
	{
		if (*((unsigned char)ptr + i) == (unsigned char)value)
			return ptr + i;
	}
	return NULL;
}

char  *strchr(const char *str, int value)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == (char)value)
			return str + i;
	}
	return NULL;
}

size_t strcspn(const char *str1, const char *str2);
char  *strpbrk(const char *str1, const char *str2);
char  *strrchr(const char *str1, int value)
{
	int i;
	char * p = NULL;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == (char)value)
			p = str + i;
	}
	return p;
}

size_t strspn(const char *str1, const char *str2);
char  *strstr(const char *str1, const char *str2)
{
	int i;
	char *p1, *p2;

	p2 = str2;
	for (p1 = str1; *p1 != '\0'; p1++)
	{

		for (i = 0; p2[i] != '\0', i++)
		{
			if (p1[i] != p2[i])
			{
				break;
			}
		}
		if (p1[i] == p2[i])
			return p1;
	}
	return NULL;
}

char  *strtok(char *str1, const char *str2)
{
	static char *lastPtr;
	char *p;

	p = str1 == NULL ? lastPtr : str1;
	while(*p != '\0' && strchr(str2, *p) != NULL)
		p++;
	if (*p == '\0'){
		lastPtr = NULL;
		return NULL;
	}

	while(*p != '\0' && strchr(str2, *p) == NULL)
		p++;
	*p = '\0';
	lastPtr = p + 1;

	return p;
}

size_t memset(void *ptr, int value, size_t num)
{
	size_t i;
	for (i = 0; i < num; i++)
	{
		*((unsigned char *)ptr + i) = (unsigned char)value;
	}
	return num;
}

char  *strerror(int errno);
size_t strlen(const char *str)
{
	char * p;

	p = str;
	while(*p != '\0')
		p++;
	
	return p - str;
}
