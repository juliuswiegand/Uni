
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct kunde
    {
       char name[20];
       char vorname[20];
    }; 
    
    struct rechnung
    {
           struct kunde kundeninfos;
           float betrag;
    } r1;
    
    
    printf("Kunde Nachname: ");
    scanf("%s", r1.kundeninfos.name);
    fflush(stdin);

    printf("Kunde Vorname: ");
    scanf("%s", r1.kundeninfos.vorname);
    fflush(stdin);

    printf("Kunde Betrag: ");
    scanf("%f", &r1.betrag);
    fflush(stdin);

    printf("\n--------------------------------\nVorname: %s\nNachname: %s\nBetrag: %.2f€\n", r1.kundeninfos.vorname, r1.kundeninfos.name, r1.betrag);
    	
    return 0;
}
