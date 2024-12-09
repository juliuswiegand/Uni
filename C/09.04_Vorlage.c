
#include <stdio.h>

struct mitarbeiter{
       int nummer;
       char name[10];
};


int main()
{
	
    struct mitarbeiter daten[4] = {{1,"Schmidt"}, {2,"Meier"}, {3, "Adams"}, {4,"Walter"}};	
    struct mitarbeiter *z_ma;

    z_ma = &daten[0];
    for (int i = 0; i < 4; i++) {
        printf("Name: %s, Nummer: %i\n", z_ma->name, z_ma->nummer);
        z_ma++;
    }
    	
    return 0;
}
