#include"Str.h"

STRING::STRING()
{
	 s=new char[20];
}
STRING::STRING(const char *a)
{
 	 s=new char[strlen(a)+1];
         strcpy(s,a);
}
STRING::STRING(STRING &a)
{
	 s=new char[strlen(a.s)+1];
	 strcpy(s,a.s);
}
STRING::~STRING()
{
	if(s!=0)
		delete[] s;
}
STRING STRING::operator [](const char *a)
{
        if(s)
                delete s;
        s=new char[strlen(s)+1];
        strcpy(s,a);
	return *this;
}
STRING STRING::operator [](STRING &a)
{
        strcpy(*this,a);
	return *this;
}
STRING STRING::operator = (STRING &a)
{
        strcpy(*this,a);
	return *this;
}

STRING STRING::operator = (const char *a)
{
        if(s)
                delete s;
        s=new char[strlen(a)+1];
        strcpy(s,a);
	return *this;
}

bool STRING::operator > (STRING& a)
{
        return (strcmp(s,a.s)>0);
}

bool STRING::operator < (STRING& a)
{
        return (strcmp(s,a.s)<0);
}
bool STRING::operator >= (STRING& a)
{
        return (strcmp(s,a.s)>=0);
}
bool STRING::operator <= (STRING& a)
{
        return (strcmp(s,a.s)<=0);
}

bool STRING::operator == (STRING& a)
{
        return (strcmp(s,a.s)==0);
}
bool STRING::operator != (STRING& a)
{
        return (strcmp(s,a.s)!=0);
}
STRING& STRING::operator +(STRING &a)
{
        static STRING n;
        strcpy(n.s,s);
        strcat(n,a);
        return n;
}


istream& operator >> (istream& in,STRING &a)
        {
                char c;
                int count=0;
                ofstream file;
                file.open("strfile",ios::out|ios::trunc);
                while(1)
                {
			cin.get(c);
                        count++;
                        file.put(c);
                        if(c=='\n')
                                break;
                }
		cout<<endl;
                file.close();
                ifstream fo;
                fo.open("strfile");
                if(a.s)
                {
                        delete[] a.s;
                        a.s=0;
                }
                a.s=new char[count];
                for(int i=0;i<count-1;i++)
                {
                        fo.get(c);
                        a.s[i]=c;
                }
                fo.close();
                a.s[count-1]='\0';
                return in;
	
	}

ostream& operator << (ostream& out,STRING &a)
{
         out<<a.s;
        return out;
}

STRING strcpy(STRING &a,STRING &b)
{
        if(a.s)
        delete a.s;
        a.s=0;
        a.s=new char[strlen(b.s)+1];
        strcpy(a.s,b.s);
	return a;
}
char * strncpy(char *a,const char *b,int c)
{
        int i=0;
        for(;(b[i]&&(i<c));i++)
        {
                a[i]=b[i];
        }
        a[i]='\0';
	return a;
}
STRING strncpy(STRING &a,STRING &b,int c)
{
        if(a.s)
        delete a.s;
        a.s=0;
        a.s=new char[strlen(b.s)+1];
        strncpy(a.s,b.s,c);
	return a;
}
int strlen(const char *a)
{
        int i=0;
        for(;a[i];i++)
        {}
        return i;
}
char * strcpy(char *a,const char *b)
{
        int i=0;
        for(;b[i];i++)
        {
                a[i]=b[i];
        }
        a[i]='\0';
	return a;
}
int strcmp(const char *a,const char *b)
{
        int i=0;
        for(;(a[i]&&b[i]);i++)
        {
                if(a[i]!=b[i])
                        break;
        }
        return (a[i]-b[i]);
}
int strcmp(STRING &a,STRING &b)
{
        return strcmp(a.s,b.s);
}

int strncmp(const char *a,const char *b,int c)
{
        int i=0;
        for(;((a[i]&&b[i])&&(i<=c));i++)
        {
                if(a[i]!=b[i])
                        break;
        }
        return (a[i]-b[i]);
}
int strncmp(STRING &a,STRING &b,int c)
{
        return strncmp(a.s,b.s,c);
}
char* strcat(STRING &a,STRING &b)
{
        char *c=strcat(a.s,b.s);
        if(a.s)
                delete a.s;
        a.s=c;
        return a.s;
}
char * strcat(const char *a,const char *b)
{
        int lena=strlen(a);
        int lenb=strlen(b);
        char *c=new char[lena+lenb+1];
        int i=0;
        for(;a[i];i++)
        {
                c[i]=a[i];
        }
        for(int j=0;b[j];j++)
        {
                c[i++]=b[j];
        }
        c[i]='\0';
        return c;
}
char* strncat(STRING &a,STRING &b,int n)
{
        char *c=strncat(a.s,b.s,n);
        if(a.s)
                delete a.s;
        a.s=c;
        return a.s;
}
char * strncat(const char *a,const char *b,int n)
{
        int lena=strlen(a);
        int lenb=strlen(b);
        char *c=new char[lena+lenb+1];
        int i=0;
        for(i=0;a[i];i++)
        {
                c[i]=a[i];
        }
        for(int j=0;((j<=n)&&b[j]);j++)
        {
                c[i++]=b[j];
        }
        c[i]='\0';
        return c;
}
char *strrev(char *a)
{
        int i=0,j=strlen(a);
        j=j-1;
        for(;i<j;i++,j--)
        {
                char b=a[i];
                a[i]=a[j];
                a[j]=b;
        }
        return a;
}
char * strrev(STRING &a)
{
        return strrev(a.s);
}
char *strupper(char *a)
{
        int i=0;
        for(;a[i];i++)
        {
                if((a[i]>='a')&&(a[i]<='z'))
                        a[i]=a[i]^32;
        }
        return a;
}
char * strupper(STRING &a)
{
        return (strupper(a.s));
}
char *strlower(char *a)
{
        int i=0;
        for(;a[i];i++)
        {
                if((a[i]>='A')&&(a[i]<='Z'))
                        a[i]=a[i]^32;
        }
        return a;
}
char * strlower(STRING &a)
{
        return (strlower(a.s));
}
char *strstr(char *a,char *b)
{
        int lena=strlen(a);
        int lenb=strlen(b);
        for(int i=0;a[i];i++)
        {
                if(a[i]==b[i])
                {
                        int a1=i+1;
                        int j=1;
                        for(;(a[a1]&&b[j]);j++,a1++)
                        {
                                if(a[a1]!=b[j])
                                        break;
                        }
                        if(b[j]=='\0')
                                return (&a[i]);
                }
        }
        return 0;
}
char * strstr(STRING &a,STRING &b)
{
        return (strstr(a.s,b.s));
}
char *strstr(STRING &a,char *b)
{
        return (strstr(a.s,b));
}
char *strstr(char *a,STRING &b)
{
        return(strstr(a,b.s));
}

char* strchr(char *a,char b)
{
        int i=0;
        for(;a[i];i++)
        {
                if(a[i]==b)
                        return &a[i];
        }
        return 0;
}
char *strchr(STRING &a,char b)
{
        return (strchr(a.s,b));
}
char *strrchr(char *a,char b)
{
        char *find=0;
        int i=0;
        for(;a[i];i++)
        {
                if(a[i]==b)
                        find=&a[i];
        }
        return find;
}
char *strrchr(STRING &a,char b)
{
        return (strrchr(a.s,b));
}


