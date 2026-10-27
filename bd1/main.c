
#include <stdio.h>
#include <stdbool.h>

int main(void) {

    // Declare variables
    double distance, totalFare;
    int waitingTime, nightInput;
    bool isNight;

    int km;
    double tableFare;
    double fare1, fare2, fare3, temp;

    // STEP 1: Get distance
    do {
        printf("Enter distance (km): ");
        if (scanf("%lf", &distance) != 1) {
            printf("Invalid input! Enter a number.\n");
            distance = -1;
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        } else if (distance < 0) {
            printf("Distance cannot be negative!\n");
        }
    } while (distance < 0);

    // STEP 2: Get waiting time
    do {
        printf("Enter waiting time (minutes): ");
        if (scanf("%d", &waitingTime) != 1) {
            printf("Invalid input! Enter a whole number.\n");
            waitingTime = -1;
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        } else if (waitingTime < 0) {
            printf("Waiting time cannot be negative!\n");
        }
    } while (waitingTime < 0);

    // STEP 3: Check nighttime
    do {
        printf("Is it nighttime? (1 = Yes, 0 = No): ");
        if (scanf("%d", &nightInput) != 1) {
            printf("Invalid input!\n");
            nightInput = -1;
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        } else if (nightInput != 0 && nightInput != 1) {
            printf("Please enter 1 or 0.\n");
        }
    } while (nightInput != 0 && nightInput != 1);

    isNight = (nightInput == 1);

    // STEP 4: Calculate taxi fare
    totalFare = 2000 + (distance * 1500)
                + (waitingTime * 200);

    // Apply nighttime surcharge
    if (isNight) {
        totalFare = totalFare * 1.20;
    }

    // Display total fare
    printf("\nTotal fare: %.2f MNT\n", totalFare);

    // STEP 5: Print 1-10 km fare table
    printf("\n===== TAXI FARE TABLE =====\n");
    printf("%-10s %12s\n", "Distance", "Fare (MNT)");
    printf("--------------------------\n");

    for (km = 1; km <= 10; km++) {
        tableFare = 2000 + (km * 1500);
        printf("%-10d %12.2f\n", km, tableFare);
    }

    // STEP 6: Get three taxi fares
    fare1 = totalFare;

    do {
        printf("\nEnter 2nd trip fare: ");
        if (scanf("%lf", &fare2) != 1) {
            fare2 = -1;
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        }

        printf("Enter 3rd trip fare: ");
        if (scanf("%lf", &fare3) != 1) {
            fare3 = -1;
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        }

        if (fare2 < 0 || fare3 < 0) {
            printf("Invalid fare! Try again.\n");
        }

    } while (fare2 < 0 || fare3 < 0);

    // STEP 7: Sort fares (lowest to highest)

    if (fare1 > fare2) {
        temp = fare1;
        fare1 = fare2;
        fare2 = temp;
    }

    if (fare1 > fare3) {
        temp = fare1;
        fare1 = fare3;
        fare3 = temp;
    }

    if (fare2 > fare3) {
        temp = fare2;
        fare2 = fare3;
        fare3 = temp;
    }

    // STEP 8: Display sorted fares
    printf("\n===== SORTED TAXI FARES =====\n");
    printf("Cheapest fare: %.2f MNT\n", fare1);
    printf("Middle fare: %.2f MNT\n", fare2);
    printf("Most expensive fare: %.2f MNT\n", fare3);

    printf("\nProgram completed successfully!\n");

    return 0;
}
