#include <stdio.h>
#include <ctype.h>

float calculateFare(char travelClass);
float checkBaggage(char travelClass, float baggageWeight);
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee);

int main(void) {
    char travelClass;
    float baggageWeight, baseFare, excessFee;

    printf("Enter travel class (E-conomy / B-usiness): ");
    scanf(" %c", &travelClass);
    travelClass = toupper(travelClass);

    if (travelClass != 'E' && travelClass != 'B') {
        printf("Error: invalid travel class.\n");
        return 1;
    }

    printf("Enter baggage weight (kg): ");
    scanf("%f", &baggageWeight);

    baseFare  = calculateFare(travelClass);
    excessFee = checkBaggage(travelClass, baggageWeight);
    printTicket(travelClass, baggageWeight, baseFare, excessFee);
    return 0;
}

float calculateFare(char travelClass) {
    if (travelClass == 'E')
        return 2500.00f;
    else
        return 6500.00f;
}

float checkBaggage(char travelClass, float baggageWeight) {
    int allowance = (travelClass == 'E') ? 20 : 40;
    if (baggageWeight > allowance)
        return (baggageWeight - allowance) * 150.00f;
    else
        return 0.0f;
}

void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee) {
    const char *className;
    int allowance;

    if (travelClass == 'E') {
        className = "Economy";
        allowance = 20;
    } else {
        className = "Business";
        allowance = 40;
    }

    printf("\n----- BOARDING SUMMARY -----\n");
    printf("Travel Class: %s\n", className);
    printf("Base Fare: PHP %.2f\n", baseFare);
    printf("Baggage Weight: %.1f kg (Allowance: %d kg)\n", baggageWeight, allowance);
    printf("Excess Baggage Fee: PHP %.2f\n", excessFee);
    printf("Total Fare: PHP %.2f\n", baseFare + excessFee);
    printf("-----------------------------\n");
}
