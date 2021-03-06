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
        srand(time(0));
        int num = rand();
        if (num < 800){
          mercury();
        }
        else if (num < 1600) {
          venus();
        }
	else if (num < 2000) {
          earth();
        }
	else if (num < 2800) {
          mars();
        }
	else if (num < 3200) {
          jupiter();
        }
	else if (num < 3800) {
          saturn();
        }
	else if (num < 4400) {
          uranus();
        }
	else if( num < 5000) {
          neptune();
        }
	else {
          pluto();
        }


}

void
userPlanet() {

    printf("What planet would you like to explore?\n You can explore: \nMercury,\n Venus,\n Earth,\n Mars,\n Jupiter$
    char planet[20] = "";
    scanf("%s", planet);
    printf("Cool! Taking you to %s now!\n", planet);
    //toupper(planet[0]);

    if (planet == "Mercury") {
        mercury();
    }
    else if(planet == "Venus") {
        venus();
    }
    else if(planet == "Earth") {
        earth();
    }
    else if (planet == "Mars") {
        mars();
    }
    else if (planet == "Jupiter") {
        jupiter();
    }
    else if (planet == "Saturn") {
        saturn();
    }
    else if (planet == "Uranus") {
        uranus();
    }
    else if (planet == "Neptune") {
        neptune();
    }
    else if (planet == "Pluto") {
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

void mars(){
	printf("Arrived at Mars! Known as the red planet."); 
}

void jupiter(){
        printf("Arrived at Jupiter! A gas giant, with a noticeable red spot."); 
}

void saturn() {
        printf("Arrived at Saturn! This planet has beautiful rings around it.");
}

void uranus() {
        printf("Arrived at Uranus! Strangely, this planet rotates around on its side."); 
}

void neptune() {
        printf("Arrived at Neptune! A very cold planet, furthest from the sun.");
}

void pluto() {
	printf("Arrived at Pluto! I don't care what they say - it's a planet.");
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
