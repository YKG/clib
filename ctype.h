#ifndef __CTYPE_H__
#define __CTYPE_H__

int isalpha(int c);
int isalnum(int c);
// int isblank(int c);  // C++11 only
int iscntrl(int c);
int isdigit(int c);
int isgraph();
int islower();
int isprint();
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);

#endif
