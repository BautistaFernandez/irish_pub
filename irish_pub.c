// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = 0.0;
    float tax_percent = 0.0;
    int tip_percent = 0;

    // Take input about bill, taxes and tip.
    printf("Bill before tax and tip: ");
    scanf("%f", &bill_amount);
    
    printf("Sale Tax Percent: ");
    scanf("%f", &tax_percent);

    printf("Tip percent: ");
    scanf("%i", tip_percent);

    // Print the final amount.
    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// Calculate final price with taxes and tip included.
float half(float bill, float tax, int tip)
{
    float tax_percent, tip_percent, final_price;

    tax_percent = (bill * tax) / 100;
    tip_percent = ((bill + tax_percent) * tip) / 100;
    final_price = (bill + tax_percent + tip_percent) / 2;

    return final_price;
}
