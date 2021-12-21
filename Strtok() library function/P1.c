 /*Write a program to generate tokens present in the above string. A token is a sequence of characters containing no speciﬁed delimiter. Print one token per line on the terminal. Use strtok C library function.
 */

#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[] = "CSE:ITER:SOADU:::::BBS:OR:IND::ASIA::::::EARTH";
 
    // Returns first token
    char* token = strtok(str, ":");
 
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ":");
    }
 
    return 0;
}