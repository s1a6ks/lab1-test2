#include <stdio.h>

int main() {
    double weightInPounds = 15, weightInKilograms;
    
    weightInKilograms = weightInPounds * 0.45359237;

    printf("Weight in kilograms: %.2lf\n", weightInKilograms);

    return 0;
}