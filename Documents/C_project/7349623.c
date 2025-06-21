#include <stdio.h>

int main() {
    // Variables to store course information for 6 courses
    float score1, score2, score3, score4, score5, score6;
    int credit1, credit2, credit3, credit4, credit5, credit6;
    float swa;
    float total_weighted_score;
    int total_credits;

    printf("KNUST Semester Weighted Average (SWA) Calculator\n");
    printf("================================================\n\n");

    // Get scores for all 6 courses
    printf("Enter the scores for your 6 courses:\n");
    printf("Course 1 score: ");
    scanf("%f", &score1);
    printf("Course 2 score: ");
    scanf("%f", &score2);
    printf("Course 3 score: ");
    scanf("%f", &score3);
    printf("Course 4 score: ");
    scanf("%f", &score4);
    printf("Course 5 score: ");
    scanf("%f", &score5);
    printf("Course 6 score: ");
    scanf("%f", &score6);

    printf("\n");

    // Get credit hours for all 6 courses
    printf("Enter the credit hours for each course:\n");
    printf("Course 1 credit hours: ");
    scanf("%d", &credit1);
    printf("Course 2 credit hours: ");
    scanf("%d", &credit2);
    printf("Course 3 credit hours: ");
    scanf("%d", &credit3);
    printf("Course 4 credit hours: ");
    scanf("%d", &credit4);
    printf("Course 5 credit hours: ");
    scanf("%d", &credit5);
    printf("Course 6 credit hours: ");
    scanf("%d", &credit6);

    // Calculate total weighted score
    total_weighted_score = (score1 * credit1) + (score2 * credit2) + (score3 * credit3) + (score4 * credit4) + (score5 * credit5) + (score6 * credit6);

    // Calculate total credits
    total_credits = credit1 + credit2 + credit3 + credit4 + credit5 + credit6;

    // Calculate SWA
    swa = total_weighted_score / total_credits;

    // Display results
    printf("\n");
    printf("========================================\n");
    printf("           SEMESTER RESULTS\n");
    printf("========================================\n");
    printf("Course 1: %.1f (Credits: %d)\n", score1, credit1);
    printf("Course 2: %.1f (Credits: %d)\n", score2, credit2);
    printf("Course 3: %.1f (Credits: %d)\n", score3, credit3);
    printf("Course 4: %.1f (Credits: %d)\n", score4, credit4);
    printf("Course 5: %.1f (Credits: %d)\n", score5, credit5);
    printf("Course 6: %.1f (Credits: %d)\n", score6, credit6);
    printf("----------------------------------------\n");
    printf("Total Credits: %d\n", total_credits);
    printf("Semester Weighted Average (SWA): %.2f\n", swa);
    printf("----------------------------------------\n");

    // Provide feedback based on KNUST grading system
    if (swa >= 80) {
        printf("Grade: A (Excellent)\n");
        printf("Feedback: Outstanding performance! Keep it up!\n");
    } else if (swa >= 75) {
        printf("Grade: B+ (Very Good)\n");
        printf("Feedback: Very good work! You're doing great!\n");
    } else if (swa >= 70) {
        printf("Grade: B (Good)\n");
        printf("Feedback: Good performance! Well done!\n");
    } else if (swa >= 65) {
        printf("Grade: C+ (Credit)\n");
        printf("Feedback: Satisfactory work. You can do better!\n");
    } else if (swa >= 60) {
        printf("Grade: C (Credit)\n");
        printf("Feedback: You passed! But there's room for improvement.\n");
    } else if (swa >= 55) {
        printf("Grade: D+ (Pass)\n");
        printf("Feedback: You barely passed. Please work harder next semester.\n");
    } else if (swa >= 50) {
        printf("Grade: D (Pass)\n");
        printf("Feedback: You passed, but you need to put in more effort.\n");
    } else {
        printf("Grade: F (Fail)\n");
        printf("Feedback: Unfortunately, you failed. Please see your academic advisor.\n");
    }

    printf("========================================\n");
    printf("Thank you for using KNUST SWA Calculator!\n");

    return 0;
}
