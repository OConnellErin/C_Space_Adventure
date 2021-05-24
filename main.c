//main.c  by Erin O'Connell
// C Space Adventure
#include <stdio.h>

int main (int argc, char *argv)
{
	greeting();
        getName();
        askForPlanet();

        return 0;
}

void
greeting() {
	printf("Greetings!\n\n Welcome to the Solar System!\n\n There are nine planets to explore. \n\n");
}

void
getName() {
        printf("What is your name?");
        scanf("%s", &value);
	printf("Hello %s ! Let's  go on an adventure!\n");
}

void
askForPlanet() {

        printf("Shall I randomly choose a planet for you to explore?", value);

        scanf("%s", &YesorNo);

        if(YesorNo == 'Y') {
            randomPlanet();
        }
        else {
        	userPlanet();
	}
}
void
randomPlanet() {
	printf("Jupiter");
}

void
userPlanet() {
            printf("Okay, I will no choose one.\n Name the planet you would like to visit:");
            char planet = ' ';
            scanf("%s", &planet);
            printf("Cool! Taking you to %s now!", planet);
}

//end of cookbook approach!
