                                      STANDARD LIBRARY function
                                            <string.h>

    1.strlen(str)
    counts number of character excluding '\0'
    ecxample:

#include<stdio.h>
int main()
{
    char arr[]="riad khan";
    printf("Length is %d\n",strlen(arr));
}


    2.strcpy(newStr,oldStr)
    copies value of old string to new string
    EXAMPLE:

#include<stdio.h>
int main()
{
    char oldString[] = "old string";
    char newString[] = "New string";
    strcpy(oldString,newString);
    puts(oldString);
}


    3.strcat(firsStr,SecStr)
    concatenates first string to second string
    EXAMPLE:

#include<stdio.h>
int main()
{
    char FirstString [100] = "Hello ";
    char LastString [] = "World";
    strcat(FirstString,LastString);
    puts(FirstString);
}

    4.strcmp(fisrtStr,secStr)
    compares two string and returns a value
    EXAMPLE:

#include<stdio.h>
int main()
{
    char FirstString [] = "Apple";
    char LastString [] = "Banana";
    printf("%d\n",strcmp(FirstString,LastString));
}


    POSITIVE when firstString>secondStrings(ASCII)
    NEGATIVE when firstString<secondStrings(ASCII)      IT COMPARES ASCII VALUE OF CHARACTERS
