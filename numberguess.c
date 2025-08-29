/*
 * 1. include stdio, stdlib, time
1. Create character array for user's name
1. Create an int variable for the correct number and fill it with a random number seeded from time
1. Use the modulus operator to get the number within the 1-100 range
1. Create an int variable to track the number of turns the user has taken and initialize it to 1
1. Ask the user for a name and store it in the name array
1. Greet the user by printing out a formatted line
1. Create an int variable called "keepGoing" to use as a boolean to tell the loop whether it should keep going and initialize it to 1 (true)
1. Start a while loop with the condition within the loop being while keepGoing == 1
    1. Print out a formatted line showing the turn number and asking the user to guess a number
    1. Create an int variable for the user's guess
    1. If the user's guess == the correct number
        1. Set keepGoing to 0 (false)
        1. Print out a formatted line telling the user that they got it right
    1. Else if the guess was too high (guess > correct)
        1. Print out a formatted line telling the user that their guess was too high
        1. Increase the number of turns by 1
    1. Otherwise
        1. Print out a formatted line telling the user that their guess was too low
        1. Increase the number of turns by 1
1. End loop
1. If the number of guesses < 7
    1. Print out a formatted line telling the user they did a great job
1. Else if the number of guesses == 7
    1. Print out a line telling the user they got the right answer in an average amount of turns
1. Else
    1. Print out a line telling the user they could've taken less turns
1. End program
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char name[20];
	srand(time(NULL));
	int correct = rand();
	// printf("Random number: %d \n", correct);
	correct = correct % 100;
	// printf("Random number modulo 100: %d \n", correct);
	int turnsTaken = 1;
	printf("Hello, what is your name? ");
	scanf("%s", name);
	printf("Nice to meet you,  %s! Let's play a game. \n", name);
	int keepGoing = 1;
	int guess;
	while (keepGoing == 1) {
		printf("Turn %d: Please guess a number: ", turnsTaken);
		scanf("%d", &guess);
		if (guess == correct) {
			keepGoing = 0;
			printf("You got it! \n");
		} else if (guess > correct) {
			printf("Too high \n");
			turnsTaken++;
		} else {
			printf("Too low \n");
			turnsTaken++;
		} // end if
	} // end while
	if (turnsTaken < 7) {
		printf("Great job! \n");
	} else if (turnsTaken == 7) {
		printf("You took an average amount of turns to guess the right answer \n");
	} else {
		printf("Can you find a faster way to get the correct number? \n");
	} // end if
	return 0;
} // end main
