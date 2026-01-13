#include <stdio.h>
#include <string.h>
void input_string(char *a, char *b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
int main() 
{
char main_string[100];
char sub_string[100];
int index;
input_string(main_string,sub_string);
index = sub_str_index(main_string,sub_string);
output(main_string,sub_string,index);
return 0;
}
void input_string(char *a, char *b)
{
printf("Enter the main string: ");
scanf("%s", a); 
printf("Enter the substring to find: ");
scanf("%s",b);
}
int sub_str_index(char *string, char *substring)
{
int string_len=strlen(string);
int sub_len=strlen(substring);
for (int i = 0; i <= string_len - sub_len; i++)
{
int j;
for (j = 0; j < sub_len; j++) 
{
if (string[i + j] != substring[j])
{
break;
}
}
if (j == sub_len)
{
return i; 
}
}
return -1;
}
void output(char *string, char *substring, int index)
{
if (index != -1)
{
printf("The index of '%s' in '%s' is %d\n", substring, string, index);
} 
else 
{
printf("The substring '%s' was not found in '%s'\n", substring, string);
}
}
