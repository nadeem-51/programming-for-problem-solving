#include <stdio.h>

#define TOTAL_QUESTIONS 15

struct Question {
    char question[256];
    char options[4][100];
    int correctOption;
};

int askQuestion(struct Question q) {
    int ans;

    printf("%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, q.options[i]);
    }

    do {
        printf("Enter your answer (1-4): ");
        scanf("%d", &ans);
        if (ans < 1 || ans > 4)
            printf("? Invalid input! Please enter a number between 1 and 4.\n");
    } while (ans < 1 || ans > 4);

    return ans == q.correctOption;
}

int main() {
    int score = 0;

    printf("********** WELCOME TO THE QUIZ GAME **********\n\n");
    printf("Rules:\n");
    printf("? Each correct answer gives you 1 point.\n");
    printf("? There are %d questions in total.\n", TOTAL_QUESTIONS);
    printf("? You need at least 10 points to pass.\n");
    printf("? Only enter option numbers (1 to 4).\n\n");

    struct Question quiz[TOTAL_QUESTIONS] = {
        {"Q1. What is the capital of India?", {"Mumbai", "Delhi", "Kolkata", "Chennai"}, 2},
        {"Q2. Who invented C language?", {"Dennis Ritchie", "James Gosling", "Ken Thompson", "Bjarne Stroustrup"}, 1},
        {"Q3. What is 9 * 9?", {"81", "72", "99", "91"}, 1},
        {"Q4. Which planet is known as the Red Planet?", {"Venus", "Mars", "Jupiter", "Saturn"}, 2},
        {"Q5. What is the boiling point of water?", {"100°C", "90°C", "110°C", "95°C"}, 1},
        {"Q6. Which data type is used for characters in C?", {"int", "float", "char", "string"}, 3},
        {"Q7. How many continents are there?", {"5", "6", "7", "8"}, 3},
        {"Q8. What is the square root of 144?", {"11", "12", "13", "14"}, 2},
        {"Q9. Who wrote 'Romeo and Juliet'?", {"William Wordsworth", "William Shakespeare", "Charles Dickens", "Jane Austen"}, 2},
        {"Q10. Which gas do plants absorb?", {"Oxygen", "Carbon Dioxide", "Hydrogen", "Nitrogen"}, 2},
        {"Q11. What is the largest mammal?", {"Elephant", "Blue Whale", "Giraffe", "Rhinoceros"}, 2},
        {"Q12. Who is known as the Missile Man of India?", {"Ratan Tata", "APJ Abdul Kalam", "Vikram Sarabhai", "C.V. Raman"}, 2},
        {"Q13. What is the value of p (pi) approximately?", {"3.14", "2.17", "1.62", "4.13"}, 1},
        {"Q14. Which is the longest river in the world?", {"Nile", "Amazon", "Ganga", "Yangtze"}, 1},
        {"Q15. In which year did India gain independence?", {"1945", "1946", "1947", "1948"}, 3}
    };

    for (int i = 0; i < TOTAL_QUESTIONS; i++) {
        printf("\n");
        if (askQuestion(quiz[i])) {
            score++;
        }
    }

    printf("\n********** QUIZ COMPLETED **********\n");
    printf("Your final score is: %d out of %d\n", score, TOTAL_QUESTIONS);

    if (score >= 10)
        printf("?? Congratulations! You passed the quiz.\n");
    else
        printf("? Sorry! You failed the quiz. Try again.\n");

    return 0;
}

