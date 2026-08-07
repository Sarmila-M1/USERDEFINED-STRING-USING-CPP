#include<iostream>
using namespace std;
class STRING
{
        char *s=0;
        public:
        STRING();
        STRING(const char *a);
        STRING(STRING &a);
        ~STRING();
        friend istream& operator >> (istream&,STRING &);
        friend ostream& operator << (ostream&,STRING &);
        friend void strcpy(STRING &a,STRING &b);
        friend void strncpy(STRING &a,STRING &b,int c);
        friend int strcmp(STRING &a,STRING &b);
        friend int strncmp(STRING &a,STRING &b,int c);
        friend char* strcat(STRING &a,STRING &b);
        friend char* strncat(STRING &a,STRING &b,int c);
        friend char * strrev(STRING &a);
        friend char * strlower(STRING &a);
        friend char * strupper(STRING &a);
        friend char * strstr(STRING &a,STRING &b);
        friend char * strstr(char *a,STRING &b);
        friend char * strstr(STRING &a,char *b);
        friend char* strchr(STRING &a,char b);
        friend char* strrchr(STRING &a,char b);

        void operator = (STRING &a);
        void operator = (const char *a);
        int operator < (STRING& a);
        int operator > (STRING& a);
        int operator <= (STRING& a);
        int operator >= (STRING& a);
        int operator != (STRING &a);
        int operator == (STRING &a);
        STRING& operator + (STRING &a);
        void operator [] (STRING &a);
        void operator [] (const char *a);

};
int strlen(const char *a);
void strcpy(char *a,const char *b);
void strcpy(STRING &a,STRING &b);
void strncpy(char *a,const char *b,int c);
void strncpy(STRING &a,STRING &b,int c);
int strcmp(const char *a,const char *b);
int strcmp(STRING &a,STRING &b);
int strcmp(const char *a,const char *b,int c);
int strncmp(STRING &a,STRING &b,int c);
char * strcat(const char *a,const char *b);
char* strcat(STRING &a,STRING &b);
char * strncat(const char *a,const char *b,int c);
char* strncat(STRING &a,STRING &b,int c);
char * strrev(char *a);
char * strrev(STRING &a);
char * strlower(char *a);
char * strupper(char *a);
char * strstr(char *a,char *b);
char * strstr(STRING &a,char *b);
char * strstr(char *a,STRING &b);
char * strstr(STRING &a,STRING &b);
char* strchr(char *a,char b);
char* strchr(STRING &a,char b);
char* strrchr(char *a,char b);
char* strrchr(STRING &a,char b);

