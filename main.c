//main.c  by Erin O'Connell
// C Space Adventure
#include "stdio.h"
#include "main.h"
#include "planetarySystem.json"


void
greeting() {
     printf("Greetings!\n\n Welcome to the Solar System!\n\n There are nine planets to explore. \n\n");
}

void
randomPlanet() {
        printf("Jupiter");
}

void
userPlanet() {

    printf("What planet would you like to explore?\n You can explore: \nMercury,\n Venus,\n Earth,\n Mars,\n Jupiter$
    char planet[20] = "";
    scanf("%s", planet);
    printf("Cool! Taking you to %s now!\n", planet);

    if (planet == "MERCURY") {
        mercury();
    }
    else if(planet == "VENUS") {
        venus();
    }
    else if (planet == "MARS") {
        mars();
    }
    else if (planet == "JUPITER") {
        jupiter();
    }
    else if (planet == "SATURN") {
        saturn();
    }
    else if (planet == "URANUS") {
        uranus();
    }
    else if (planet == "NEPTUNE") {
        neptune();
    }
    else if (planet == "PLUTO") {
        pluto();
    }

}

void
askForPlanet() {
    char YesorNo[10] = "";
    printf("Shall I randomly choose a planet for you to explore?\n");
    scanf("%s", YesorNo);
    if(toupper(YesorNo[0]) == 'Y') {
        randomPlanet();
   }
    else {
        userPlanet();
    }
}

void
getName() {
    char name[10] = "";
    printf("What is your name?\n\n");
    scanf("%s", name);
    printf("Hello %s ! Let's  go on an adventure!\n", name);

}

void mercury(){
        printf("Arrived at Mercury! A very hot planet, closest to the sun.\n");
}

void venus(){
        printf("Arrived at Venus! It's very cloudy here!");
}

void earth() {
	printf("Arrived at Earth! There is something very familiar about this planet.");
}



int main (int argc, char *argv)
{
        greeting();
        getName();
        askForPlanet();


        return 0;
}







                                                         [ Nothing was cut ]
^G Get Help     ^O Write Out    ^W Where Is     ^K Cut Text     ^J Justify      ^C Cur Pos      M-U Undo        M-A Mark Text
^X Exit         ^R Read File    ^\ Replace      ^U Paste Text   ^T To Spell     ^_ Go To Line   M-E Redo        M-6 Copy Text
