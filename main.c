/* This program calculates a carpet installation bill 
           Written by: Afnan Sultan
         Date last modified: 5/26/17 */

#include <stdio.h>

int main()

{

int length;
int width;
int area;
int discount_percentage;

float discount;
float carpet_price; //COST PER SQ. FOOT
float carpet_cost;
float labor = 0.35;
float labor_cost;// = 0.35 * area; 
float installation;
float subtotal;
float tax;
float total;

printf("Enter Length (feet, integer): ", length);
scanf("%d", &length);

printf("Enter Width (feet, integer): ", width);
scanf("%d", &width);

printf("Enter Customer Discount (Percent, integer): ", discount_percentage);
scanf("%d", &discount_percentage);

area = length*width;
labor_cost = 0.35*area;

printf("Enter Carpet Cost per square foot (xxx.xx): ", area);
scanf("%f", &carpet_price);

carpet_cost = area*carpet_price;
installation = carpet_cost + labor_cost;
discount = installation * discount_percentage/100;
subtotal = installation - discount;
tax = 8.5/100 * subtotal;
total = subtotal + tax;

printf("\n\t\t\tMEASUREMENTS\t\t\n\n ");
printf("Length %d ft.\n ", length);
printf("Width %d ft. \n ", width);
printf("Area %d sq. ft. \n\n\n ", area);

printf("\t\t\tCHARGES\t\t\n\n ");
printf("DESCRIPTION\t COST/SQ.FT.\t   CHARGE");
printf("\n-----------\t -----------\t----------");
printf("\nCarpet :\t %10.2f \t $%10.2f", carpet_price, carpet_cost); 
printf("\nLabor :\t\t %10.2f \t %10.2f\n", labor, labor_cost);
printf("\nINSTALLED PRICE\t\t\t $%10.2f\n", installation);
printf("Discount\t %d% \t\t %10.2f\n", discount_percentage, discount);
printf("\t\t\t\t----------\n");
printf("SUBTOTAL\t\t\t %10.2f\n", subtotal);
printf("Tax\t\t\t\t %10.2f\n", tax);
printf("TOTAL\t\t\t\t %10.2f\n", total);
printf("\t\t\t\t----------\n");

}
