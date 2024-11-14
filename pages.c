/*A customer needs a specific amount of paper. The charges on the paper are $0.10 for single sheets,
$0.055 for amounts in multiples of 100 sheets, $0.04 in multiples of 500 sheets, and $0.03 in multiples
of 1000 sheets Write a C Program to calculate the type and number of package(s) for the least amount
of money the customer should buy, given the minimum amount of sheets the customer needs. For
example, if the customer needs 380 sheets, the amount she would pay when buying in multiples of 100
would be $22.00. However, if the customer bought 500 sheets, the cost would be $20.00. It would be
cost effective for the customer to buy a package of 500 sheets.*/

#include <stdio.h>

int main()
{
    float single_page, pages_100, pages_500, pages_1000;
    int pages_quantity;

    printf("Enter the minimum amount of pages required: ");
    scanf("%d", &pages_quantity);

    single_page = pages_quantity * 0.10;
    pages_100 = pages_quantity * 0.055;
    pages_500 = pages_quantity * 0.04;
    pages_1000 = pages_quantity * 0.03;

    float min_price = single_page;
    int package_type = 1;

    if (pages_100 < min_price)
    {
        min_price = pages_100;
        package_type = 100;
    }
    else if (pages_500 < min_price)
    {
        min_price = pages_500;
        package_type = 500;
    }
    else if (pages_1000 < min_price)
    {
        min_price = pages_1000;
        package_type = 1000;
    }

    printf("You can get packages of %d pages for the least cost of $%.2f\n.", package_type, min_price);

    return 0;
}