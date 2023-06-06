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
