#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>



int main(void) {
	struct stapovi *stap;
	stap = zauzimanje_memorije_stap(&stap);
	struct hrana *hrana;
	hrana = zauzimanje_memorije_hrana(&hrana);
	struct puske *puske;
	puske = zauzimanje_memorije_puske(&puske);
      struct pribor pribor*;
      pribor = zauzimanje_memorije_pribor(&pribor);
      struct municija *municija;
      municija = zauzimanje_memorije_municija(&municija);
	unos_stapova(&stap);
	printf("\n");
	unos_hrane(&hrana);
	printf("\n");
	unos_puski(&puske);
	printf("\n");
	unos_municije(&municija);
	printf("\n");
	ispis_stapova(&stap);
	ispis_hrane(&hrana);
	ispis_puski(&puske);
	ispis_pribora(&pribor);
	ispis_municije(&municija);
	

	return 0;
}
