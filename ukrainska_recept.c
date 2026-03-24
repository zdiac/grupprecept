#include <stdio.h>

void visa_recept(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Kunde inte öppna filen!\n");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

int main() {
    int val;

    printf("=== Ukrainiska recept ===\n");
    printf("1. Borsjtj\n");
    printf("2. Varenyky\n");
    printf("Välj ett alternativ: ");

    scanf("%d", &val);

    if (val == 1) {
        visa_recept("ukrainska/ukrainsk_borsjtj.txt");
    } 
    else if (val == 2) {
        visa_recept("ukrainska/ukrainska_varenyky.txt");
    } 
    else {
        printf("Fel val!\n");
    }

    return 0;
}
