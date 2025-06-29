#include <stdio.h>

int main() {
    float gari_beans_price, ripe_plantain_price, plain_rice_price, egg_price;
    float discount_percentage, total_price, discount_amount, price_after_discount;

    printf("Enter price of Gari and Beans in GHC: ");
    scanf("%f", &gari_beans_price);
    printf("Enter price of Ripe Plantain in GHC: ");
    scanf("%f", &ripe_plantain_price);
    printf("Enter price of Plain Rice in GHC: ");
    scanf("%f", &plain_rice_price);
    printf("Enter price of an Egg in GHC: ");
    scanf("%f", &egg_price);

    printf("Enter percentage discount: ");
    scanf("%f", &discount_percentage);

    total_price = gari_beans_price + ripe_plantain_price + plain_rice_price + egg_price;
    discount_amount = (discount_percentage / 100) * total_price;
    price_after_discount = total_price - discount_amount;

    printf("Total price before discount: GHC %.2f\n", total_price);
    printf("Discount amount: GHC %.2f\n", discount_amount);
    printf("Price student is expected to pay: GHC %.2f\n", price_after_discount);

    return 0;
}