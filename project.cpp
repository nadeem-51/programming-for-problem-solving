#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("********** WELCOME TO THE QUIZ GAME **********\n\n");
    printf("Rules:\n");
    printf(" 1:Each correct answer gives you 1 point.\n");
    printf(" 2: There are 15 questions in total.\n");
    printf(" 3: You need at least 10 points to pass.\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 2
    printf("\nQ2. Who invented C language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Ken Thompson\n4. Bjarne Stroustrup\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 3
    printf("\nQ3. What is 9 * 9?\n");
    printf("1. 81\n2. 72\n3. 99\n4. 91\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 4
    printf("\nQ4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Mars\n3. Jupiter\n4. Saturn\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 5
    printf("\nQ5. What is the boiling point of water?\n");
    printf("1. 100°C\n2. 90°C\n3. 110°C\n4. 95°C\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 6
    printf("\nQ6. Which data type is used for characters in C?\n");
    printf("1. int\n2. float\n3. char\n4. string\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 7
    printf("\nQ7. How many continents are there?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 8
    printf("\nQ8. What is the square root of 144?\n");
    printf("1. 11\n2. 12\n3. 13\n4. 14\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 9
    printf("\nQ9. Who wrote 'Romeo and Juliet'?\n");
    printf("1. William Wordsworth\n2. William Shakespeare\n3. Charles Dickens\n4. Jane Austen\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 10
    printf("\nQ10. Which gas do plants absorb?\n");
    printf("1. Oxygen\n2. Carbon Dioxide\n3. Hydrogen\n4. Nitrogen\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 11
    printf("\nQ11. What is the largest mammal?\n");
    printf("1. Elephant\n2. Blue Whale\n3. Giraffe\n4. Rhinoceros\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 12
    printf("\nQ12. Who is known as the Missile Man of India?\n");
    printf("1. Ratan Tata\n2. APJ Abdul Kalam\n3. Vikram Sarabhai\n4. C.V. Raman\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 13
    printf("\nQ13. What is the value of p (pi) approximately?\n");
    printf("1. 3.14\n2. 2.17\n3. 1.62\n4. 4.13\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 14
    printf("\nQ14. Which is the longest river in the world?\n");
    printf("1. Nile\n2. Amazon\n3. Ganga\n4. Yangtze\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 15
    printf("\nQ15. In which year did India gain independence?\n");
    printf("1. 1945\n2. 1946\n3. 1947\n4. 1948\n");
    printf("Enter your answer: ");
    
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Final result
    printf("\n********** QUIZ COMPLETED **********\n");
    printf("Your final score is: %d out of 15\n", score);

    if (score >= 10)
        printf("?? Congratulations! You passed the quiz.\n");
    else
        printf("? Sorry! You failed the quiz. Try again.\n");

    return 0;
}


