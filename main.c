//main.c  by Erin O'Connell
// C Space Adventure
#include <stdio.h>

int main (int argc, char *argv)
{

        printf("Greetings!\n\n Welcome to the Solar System!\n\n There are nine planets to explore. \n\n What is your name?");
        scanf("%s", &value);
        printf("Hello %s ! Let's  go on an adventure!\n Shall I randomly choose a planet for you to explore?", value);

	scanf("%s", &YesorNo);

        if(YesorNo == 'Y') {
            printf("Jupiter");
        }
        else {
            printf("Okay, I will no choose one.\n Name the planet you would like to visit:");
            char planet = ' ';
            scanf("%s", &planet);
            printf("Cool! Taking you to %s now!", planet);

        }


        return 0;
}

