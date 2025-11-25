#include <stdio.h>
int main (){
   float cp, sp, profit, loss,  percent;
   printf("enter cost price:");
   scanf("%f", &cp); 
   printf("enter selling price: ");
   scanf("%f", &sp);

   if(sp > cp) {
    profit = sp - cp;
    percent = (profit / cp) * 100;
    printf("profit = %.2f\n", profit);
    printf("profit percentage = %.2f%%\n");
   }
   else if(cp>sp) {
    loss = cp- sp;
    percent = (loss / cp) * 100;
    printf("loss=%.2f\n", loss);
    printf("loss percentage=%.2f%%\n", percent);
   }
   else {
    printf("no profit, no loss.\n");
   }
   return 0;
}