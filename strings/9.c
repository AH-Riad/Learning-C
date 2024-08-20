//FIND THE SALTED FORM OF A PASSWORD ENTERED BY THE USER IF THE SALT IS "123" AND ADDED AT THE END
#include<stdio.h>
void printSaltedPassword(char password[])
{
    char salt[] = "5396";
    char newPassword[100];
    strcpy(newPassword,password);
    strcat(newPassword,salt);
    puts(newPassword);
}
int main()
{
    /*char password[100];
    printf("Enter your password:");
    fgets(password,100,stdin);
    */
    char pass[200];
    printf("Enter your password:\n");
    scanf("%s",pass);
    printSaltedPassword(pass);

}


