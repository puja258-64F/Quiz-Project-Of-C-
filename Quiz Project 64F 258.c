#include <stdio.h>

int main() {
    int start, answer, score = 0;

    printf("Welcome to the Multiple-Choice Quiz Game\n");
    printf("Press 0 to Start the Quiz\n");
    printf("Press 1 to Quit\n");
    printf("Your choice: ");
    scanf("%d", &start);

    if (start == 1) {
        printf("You chose to quit. Goodbye!\n");
        return 0;
    } else if (start != 0) {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    printf("\nLet's Start!\n");


    printf("\nQ1: Which language is used to write system software like Operating Systems?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. Correct answer: 3. C\n");
    }


    printf("\nQ2: What is int in C programming?\n");
    printf("1. identifier\n2. keyword\n3. symbol\n4. constant\n");
    printf("Your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. Correct answer: 2. keyword\n");
    }


    printf("\nQ3: Which of the following is a valid keyword in C?\n");
    printf("1. function\n2. var\n3. return\n4. define\n");
    printf("Your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. Correct answer: 3. C++\n");
    }

    // Final score
    printf("\n Quiz Completed!\n");
    printf("Your score: %d out of 3\n", score);

    if (score == 3) {
        printf("Excellent!\n");
    } else if (score == 2) {
        printf("Well done!\n");
    } else {
        printf("Keep learning, you'll get better!\n");
    }

    return 0;
}
