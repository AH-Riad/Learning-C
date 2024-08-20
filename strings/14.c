//write a program to count vowel,consonant,digit,word,other in a string
#include<stdio.h>
int main()
{
    char str[200];
    printf("Enter a string:");
    gets(str);
    int i,vowel,consonant,digit,word,other;
    i=vowel=consonant=other= digit=0;
    char ch;

    for(int i=0;str[i]!='\0';i++)
    {
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
            vowel++;
      /*else if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
        consonant++;
      else if(ch>='0'&& ch<='9')
       digit++;
      else if (ch = ' ')
        word++;
       else
        other++;
            printf("vowels are :%d\n",vowel);
    }
    printf("vowels are :%d\n",vowel);
   // printf("vowels:%d\t consonant:%d\t digit:%d\t world:%d\t other:%d\t",vowel,consonant,digit,word,other);


}


