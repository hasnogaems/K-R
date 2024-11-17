#include <stdio.h>
#define MAXLINE 10 /* maximum input line length */
int getlinee(char s[],int lim);
void copy(char to[], char from[]);
/* print the longest input line */
int main()
{
int len; /* current line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
max = 0;
while (1)
getlinee(line, MAXLINE);

//copy(longest, line);
//printf("%s", longest);
return 0;
}
/* getline: read a line into s, return length */
int getlinee(char s[],int lim)
{
int c, i;
for (i=0;(c=getchar())!=EOF && c!='\n'; ++i)
if(i<lim-1)s[i] = c;
if(i>0){
    if(i>=lim-1)i=(lim-1);
while((i-1)>-1&&(s[i-1]==' '||s[i-1]=='\t'||s[i-1]=='x'||s[i-1]=='\n')){
    i--;
}
if(i>0){
if (c == '\n'&&i<lim-1) {
s[i] = c;
++i;
}

s[i] = '\0';

printf("%s", s);}}
return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
int i;
i = 0;
while ((to[i] = from[i]) != '\0')
++i;
}
void trim(char a[]){
    
}