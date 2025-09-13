#include <stdio.h>

int main() {
	// your code goes here
    float cost_price, selling_price, profit, loss, percent;
    printf("Enter cost price:");
    scanf("%f", &cost_price);
    printf("Enter selling_price:");
    scanf("%f", &selling_price);
    if (cost_price <=0) {
    printf("Cost price must be greater than zero.\n");
    return 0;
    }
    if (selling_price > cost_price) {
    profit= selling_price - cost_price;
    percent = (profit / cost_price) * 100;
    printf("Profit = %.2f\n", profit);
    printf("Profit percentage = %.2f%%\n", percent);
    }
    else if (selling_price < cost_price) {
    loss = cost_price - selling_price;
    percent =( loss / cost_price) * 100;
    printf("Loss = %.2f\n", loss);
    printf("Loss percentage = %2f%%\n", percent)
    }
    else {
    printf("No profit, No loss.\n");
    }
    return 0;
}
