#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char correctPassword[] = "patito";
    char password[10];

    gets(password);

    if(strncmp(password, correctPassword, 10) == 0)
        printf("\nPassword correcto. Bienvenido!\n");
    else    
        printf("\nAcceso denegado.\n");

    return 0;
}
