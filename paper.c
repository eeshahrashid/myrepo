/* A customer needs a specific amount of paper. The charges on the paper are $0.10 for single sheets,
$0.055 for amounts in multiples of 100 sheets, $0.04 in multiples of 500 sheets, and $0.03 in multiples
of 1000 sheets Write a C Program to calculate the type and number of package(s) for the least amount
of money the customer should buy, given the minimum amount of sheets the customer needs. For
example, if the customer needs 380 sheets, the amount she would pay when buying in multiples of 100
would be $22.00. However, if the customer bought 500 sheets, the cost would be $20.00. It would be
cost effective for the customer to buy a package of 500 sheets. */
#include <stdio.h>
#include <math.h>

int main()
{

    double cost, total_cost;
    int th, fv, hn, pages;

    printf("Enter the minimum amount of pages required: ");
    scanf("%d", &pages);
    printf("The best offer for you is:\n");

    th = pages / 1000;
    pages = pages - th * 1000;

    fv = pages / 500;
    pages = pages - fv * 500;

    hn = pages / 100;
    pages = pages - hn * 100;

    total_cost = th * 1000 * (0.03) + fv * 500 * (0.04) + hn * 100 * (0.055) + pages * (0.1);

    if (th != 0)
    {
        printf("%d bundles of 1000 pages\n", th);
    }
    if (fv != 0)
    {
        printf("%d bundles of 500 pages\n", fv);
    }
    if (hn != 0)
    {
        printf("%d bundles of 100 pages\n", hn);
    }
    if (pages != 0)
    {
        printf("%d pages\n", pages);
    }
    printf("total cost: $%.2lf only\n", total_cost);
}

// void solution()
// {
//     int pages = 670;
//     float total_cost = 0;
//     int tn = 0, fv = 0, hn = 0, s = 0;
//     while (pages > 0)
//     {
//         float mini = 1e9; // ??
//         int choice = 0;
//         int min_pages = 0;

//         int quantity = ceil(pages / 1.0);
//         float cost = quantity * 0.1 * 1;
//         if (mini >= cost)
//         {
//             mini = cost;
//             choice = 0;
//             min_pages = quantity * 1;
//         }
//     }
//     {
//         int quantity = ceil(pages / (float)100);
//         float cost = quantity * 0.055 * 100;
//         if (mini >= cost)
//         {
//             mini = cost;
//             choice = 1;
//             min_pages = quantity * 100;
//         }
//     }
//     {
//         int quantity = ceil(pages / 500.0);
//         float cost = quantity * 0.04 * 500;
//         if (mini >= cost)
//         {
//             mini = cost;
//             choice = 2;
//             min_pages = quantity * 500;
//         }
//     }
//     {
//         int quantity = ceil(pages / 1000.0);
//         float cost = quantity * 0.033 * 1000;
//         if (mini >= cost)
//         {
//             mini = cost;
//             choice = 3;
//             min_pages = quantity * 1000;
//         }
//     }

//     total_cost += mini;

//     pages -= min_pages;

//     switch (choice)
//     {
//     case 0:
//         s += 1;
//         break;
//     case 1:
//         hn += 1;
//         break;
//     case 2:
//         fv += 1;
//         break;
//     case 3:
//         tn += 1;
//         break;
//     default:
//         break;
//     }
// }

// printf("total cost: %f\n", total_cost);
// if (tn != 0)
// {
//     printf("%d bundles of 1000 pages\n", tn);
// }
// if (fv != 0)
// {
//     printf("%d bundles of 500 pages\n", fv);
// }
// if (hn != 0)
// {