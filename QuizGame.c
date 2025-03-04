#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {"What is the capital of the US?", "Who invented the lightbulb?", "Who invented Python?"};
    char options[][100] = {"California", "Washington State", "Washington D.C.", "New York City", "Thomas Edison", "Nikola Tesla", "Elon Musk", "Albert Einstein", "Dennis Ritchie", "John Carmack", "Guido Van Rossum", "Steve Jobs"};

    char answers[3] = {'B', 'A', 'B'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("-----------------------\n");
        printf("%s\n", questions[i]);
        printf("-----------------------\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c"); //clear \n from input buffer

        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("WRONG!\n");
        }
    }
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);

    return 0;
}