#include <stdio.h>

int main()
{
    // Variablen deklarieren
    float preis;
    float eingeworfen = 0;
    int sorte;
    int anzahl;

    printf("\n-------------AUSWAHL-------------\n");

    // Auswahl der Getraenke
    printf("Waehlen Sie Ihr Getraenk aus:\n");
    printf("1) Wasser (0,50 Euro)\n");
    printf("2) Limonade (1,00 Euro)\n");
    printf("3) Bier (2,00 Euro)\n\n");
    printf("Geben sie 1, 2 oder 3 ein: ");
    scanf("%i", &sorte);

    // den zu zahlenden Betrag festlegen per switch
    switch (sorte)
    {
        case 1:
            preis = 0.5;
            break;
        case 2:
            preis = 1;
            break;
        case 3:
            preis = 2;
            break;
        default:
            printf("Das Getraenk haben wir nicht");
            break;
    }

    printf("Wie viel wollen Sie: ");
    scanf("%i", &anzahl);
    preis = preis * anzahl;

    printf("\n\n-------------ZAHLVORGANG-------------\n");
    
    while (preis > 0) {
        // Aufforderung zur Bezahlung
        printf("Bitte zahlen Sie noch %.2f€: ", preis);

        // ueberpruefe Geldstueck mit if-Abfrage
        scanf("%f", &eingeworfen);
        preis -= eingeworfen;

        if (preis < 0) {
            printf("Hier sind %.2f€ Rueckgeld...\n\n", preis * -1);
        }
    }

    printf("\n\n-------------AUSGABE-------------\n");

    for (int i = 1; i <= anzahl; i++) {
        printf("Getraenk %i/%i wurde ausgegeben.\n", i, anzahl);
    }

    printf("Vielen Dank, bitte entnehmen Sie die Getraenke.\n");

    return 0;
}
