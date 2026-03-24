#include <stdio.h>

#define RESET   "\033[0m"
#define ROD     "\033[31m"
#define GRON    "\033[32m"
#define GUL     "\033[33m"
#define BLA     "\033[34m"
#define FET     "\033[1m"


int main(){
	int val;

		printf("\n");
		printf(GUL "Recept: Köttbullar med pastasås och spaghetti\n" RESET);
		printf("Hur många portioner ska du laga? Skriv siffran 1 eller 2:\n");
    		printf(GRON "1 = En portion \n" RESET);
    		printf(BLA "2 = Två portioner\n"RESET);
    		printf("Ditt val: ");
	
	scanf("%d", &val);

	if (val == 1) {
        	printf("\n");
		printf(GRON "En portion köttbullar med spaghetti och pastasås\n" RESET);	
		printf("\n");
		printf("Ingridienser:\n");
		printf("Frysta ekoligska köttbullar\n");
		printf("Barilla Classico pastasås 400g\n");
		printf("Spaghetti\n");
		printf("Ekologisk spenat\n");
		printf("Ketchup\n");
		printf("Salt\n");
		printf("\n");
		printf("Tillagning:\n");
		printf("- Koka upp 750ml vatten, tillsätt salt och valfri mängd spaghetti och låt koka i 7-8 minuter.\n");
		printf("- Stek 9st köttbullar i 15 minuter med smör i en stekpanna på medelhög värme.\n");
		printf("- Häll ur vattnet ur kastrullen och servera pastan, tillsätt drygt en tredjedel pastasås.\n");
		printf("- Salta och blanda.\n");
		printf("- Tillsätt valfri mängd spenat.\n");
		printf("- Tillsätt köttbullarna.\n");
		printf("- Lägg till valfri mängd ketchup på köttbullarna.\n");
		printf("\n");
}
	else if (val == 2) {
		printf("\n");
		printf(BLA "Två portioner köttbullar med spaghetti och pastasås\n" RESET);
		printf("\n");
		printf("Ingridienser:\n");
		printf("Frysta ekoligska köttbullar\n");
        	printf("Barilla Classico pastasås 400g\n");
        	printf("Spaghetti\n");
        	printf("Ekologisk spenat\n");
        	printf("Ketchup\n");
        	printf("Salt\n");
        	printf("\n");
        	printf("Tillagning:\n");
        	printf("- Koka upp 750ml vatten, tillsätt salt och valfri mängd spaghetti och låt koka i 7-8 minuter.\n");
        	printf("- Stek 18st köttbullar i 15 minuter med smör i en stekpanna på medelhög värme.\n");
        	printf("- Häll ur vattnet ur kastrullen och servera pastan, tillsätt drygt två tredjedelar pastasås.\n");
        	printf("- Salta och blanda.\n");
        	printf("- Tillsätt valfri mängd spenat.\n");
        	printf("- Tillsätt köttbullarna.\n");
        	printf("- Lägg till valfri mängd ketchup på köttbullarna.\n");
		printf("\n");
}
 	else {
		printf("\n");
        	printf(ROD "Ogiltigt val. Starta om programmet.\n" RESET);
		printf("\n");
    }


	return 0;
} 
