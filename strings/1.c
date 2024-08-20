/*                                        STRINGS
A CHARACTER ARRAY TERMINATED BY A NULL CHARACTER('\0')
null character denotes strings termination

EXAMPLE:
char name[]= {'S','H','R','R','A','D','H','A','\0'};
*/
#include<stdio.h>
int main()
{
    char name[]= {'S','H','R','R','A','D','H','A','\0'};
    char compliment[]={'R', 'I', 'A', 'D',' ', 'I', 'S', ' ', 'A', ' ', 'G', 'O', 'O', 'D', ' ', 'B', 'O', 'Y', '\0'};


    printf("%s\n",name);
    printf("%s",compliment);

}
