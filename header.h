#ifndef HEADER_H
#define HEADER_H


int zauzimanje_memorije_stapovi(struct stap *);
int zauzimanje_memorije_hrana(struct hrana *);
int zauzimanje_memorije_puske(struct puske*);
int zauzimanje_memorije_pribor(struct pribor*);
int zauzimanje_memorije_municija(struct municija*);
int unos_stapova(struct stap *);
int unos_hrane(struct hrana *);
int unos_puski(struct puske *);
int unos_pribora(struct pribor *);
int unos_municije(struct municija *);
int ispis_stapova(struct stap *);
int ispis_hrane(struct hrana*);
int ispis_puski(struct puske*);
int ispis_pribora(struct pribor*);
int ispis_municije(struct municija *);





struct stap {
	float cijena_stap;
	char naziv_stap[20];
	int kolicina_stap;
};
struct hrana {
	float cijena_hrana;
	char naziv_hrana[20];
	int kolicina_hrana;
};


struct puske {
	float cijena_puske;
	char naziv_puske[20];
	int kolicina_puske;
};

struct pribor {
	float cijena_pribor;
	char naziv_pribor[20];
	int kolicina_pribor;
};


struct municija {
	float cijena_municija;
	char naziv_municija[20];
	int kolicina_municija;
};



#endif
