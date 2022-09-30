#include <bits/stdc++.h>

int32_t main(int32_t argc, char *argv[]) {
    /* get the user_score */
    std::cout << "Enter Your Score: ";
    int32_t scores{0};
    std::cin >> scores;

    char letter_grade{'\0'};
    if (scores >= 0 && scores <= 100) {
        /* for a valid score */
        if (scores > 90) {
            letter_grade = 'A';
        } else if (scores > 80) {
            letter_grade = 'B';
        } else if (scores > 70) {
            letter_grade = 'C';
        } else if (scores > 60) {
            letter_grade = 'D';
        } else {
            letter_grade = 'F';
        }

        /* print appropriate message */
        std::cout << "Your Grade Is: " << letter_grade << "\n";
        if (letter_grade != 'F') {
            std::cout << "Congrats! You have passed.";
        } else {
            std::cout << "You Failed, repeat the class.";
        }
    } else {
        /* for an invalid score */
        std::cout << "Invalid Score Value!\n";
    }
    return 0;
}
