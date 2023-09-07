//Kopie

#include <stdio.h>

int main() {
    int tassenKaffee = 0;

    printf("Willkommen bei der fantastischen Kaffeemaschine!\n");

    while (tassenKaffee < 5) {
        printf("Möchtest du eine Tasse Kaffee? (Ja/Nein): ");
        char antwort[3];
        scanf("%s", antwort);

        if (strcmp(antwort, "Ja") == 0 || strcmp(antwort, "ja") == 0) {
            tassenKaffee++;
            printf("Tasse Kaffee Nr. %d wird zubereitet. Genieße es!\n", tassenKaffee);
        } else if (strcmp(antwort, "Nein") == 0 || strcmp(antwort, "nein") == 0) {
            printf("Vielleicht nächstes Mal. Auf Wiedersehen!\n");
            break;
        } else {
            printf("Ungültige Antwort. Bitte gib 'Ja' oder 'Nein' ein.\n");
        }
    }

    if (tassenKaffee >= 5) {
        printf("Du hast zu viele Tassen Kaffee getrunken! -Kaffeeoverflow- \n");
    }

    return 0;
}
