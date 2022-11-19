#include<stdio.h>
#include<conio.h>
main()
{
	int money, bank1000, mod1000, bank500, mod500, bank100, mod100, bank50, mod50, bank20, mod20, medal10, mod10, medal5, mod5, medal2, mod2, medal1, mod1;
	printf("Enter monry : ");
	scanf("%d",&money);
	bank1000 = money / 1000;
	mod1000 = money % 1000;
	bank500 = mod1000 / 500;
	mod500 = mod1000 % 500;
	bank100 = mod500 / 100;
	mod100 = mod500 % 100;
	bank50 = mod100 / 50;
	mod50 = mod100 % 50;
	bank20 = mod50 / 20;
	mod20 = mod50 % 20;
	medal10 = mod20 / 10;
	mod10 = mod20 % 10;
	medal5 = mod10 / 5;
	mod5 = mod10 % 5;
	medal2 = mod5 / 2;
	mod2 = mod5 % 2;
	printf("_______________________________________\n");
	printf("bank 1000 = %d\n" ,bank1000);
	printf("bank 500 = %d\n" ,bank500);
	printf("bank 100 = %d\n" ,bank100);
	printf("bank 50 = %d\n" ,bank50);
	printf("bank 20 = %d\n" ,bank20);
	printf("medal10 = %d\n" ,medal10);
	printf("medal5 = %d\n" ,medal5);
	printf("medal2 = %d\n" ,medal2);
	printf("medal1 = %d\n" ,mod2);
	printf("_______________________________________\n");

	getch();
}
