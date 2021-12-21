/*
Modify the program to print the count of the number of tokens.
*/

#include <stdio.h>
#include <string.h>
 
int main()
{
    //int count=0
    char str[] = "CSE:ITER:SOADU:::::BBS:OR:IND::ASIA::::::EARTH";
 
    // Returns first token
    char* token = strtok(str, ":");
 
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ":");
    //    count++;
    }
    //printf("No. of tokens is %d",count)
 
    return 0;
}