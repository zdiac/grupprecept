#include <stdio.h>

int main(){
	int val;

	printf("Recept: Köttbullar med pastasås och spaghetti\n");
	printf("Hur många portioner ska du laga? Skriv 1 eller 2:\n");
    	printf("1 = En portion \n");
    	printf("2 = Två portioner\n");
    	printf("Ditt val: ");
	
	scanf("%d", &val);

	if (val == 1) {
        printf("En portioner köttbullar med spaghetti och pastasås\n");	
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
}
	else if (val == 2) {
	printf("Två portioner \n");
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

}
	return 0;
} 
