#include <stdio.h>
#include <string.h>

#define TOTAL_QUESTIONS 3

struct Question {
    char question_text[200];
    char options[4][50];
    char correct_option;
};

int main() {
    struct Question quiz[TOTAL_QUESTIONS] = {
        {
            "Which programming language is known as the 'mother of all languages'?",
            {"A. Python", "B. C", "C. Java", "D. C++"},
            'B'
        },
        {
            "What is the correct extension of a C language source file?",
            {"A. .c", "B. .cpp", "C. .obj", "D. .exe"},
            'A'
        },
        {
            "Which of the following is not a valid data type in C?",
            {"A. int", "B. float", "C. boolean", "D. char"},
            'C'
        }
    };

    int score = 0;
    char user_answer;

    printf("=========================================\n");
    printf("     WELCOME TO THE QUIZ MANAGEMENT      \n");
    printf("=========================================\n\n");

    for (int i = 0; i < TOTAL_QUESTIONS; i++) {
        printf("Question %d: %s\n", i + 1, quiz[i].question_text);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        while (1) {
            printf("Your Answer (A/B/C/D): ");
            if (scanf(" %c", &user_answer) != 1) {
                while (getchar() != '\n');
                continue;
            }
            
            if (user_answer >= 'a' && user_answer <= 'z') {
                user_answer -= 32; 
            }

            if (user_answer == 'A' || user_answer == 'B' || user_answer == 'C' || user_answer == 'D') {
                break; 
            }
            printf("Invalid input! Please enter A, B, C, or D.\n");
        }

        if (user_answer == quiz[i].correct_option) {
            printf("✅ Correct!\n\n");
            score++;
        } else {
            printf("❌ Wrong! The correct answer was %c.\n\n", quiz[i].correct_option);
        }
    }

    float percentage = ((float)score / TOTAL_QUESTIONS) * 100;

    printf("=========================================\n");
    printf("               QUIZ REPORT               \n");
    printf("=========================================\n");
    printf("Total Questions : %d\n", TOTAL_QUESTIONS);
    printf("Correct Answers : %d\n", score);
    printf("Your Score      : %.2f%%\n", percentage);
    
    if (percentage >= 70.0) {
        printf("Status          : PASSED 🎉\n");
    } else {
        printf("Status          : FAILED ❌ (Required: 70%%)\n");
    }
    printf("=========================================\n");

    return 0;
}