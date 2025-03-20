#include <Headers/manga.h>

Manga::Manga(string n = "Indefinito", unsigned int a = 0, Lingua l = Lingua::Undefined, Copertina c = Copertina(), Cadenza ca = Cadenza::Undefined, string ma = "Indefinito", string pu = "Indefinito", unsigned int nc = 0, Genere g = Genere()) :
             Fisico(n, a, l), Periodico(ca), mangaka(ma), publisher(pu), numeroCapitoli(nc), genere(g) {}

string Manga::getMangaka() const { return mangaka; }

string Manga::getPublisher() const { return publisher; }

unsigned int Manga::getCapitoli() const { return numeroCapitoli; }

Manga::Genere Manga::getGenere() const { return genere; }

void Manga::setMangaka(const string& ma) { mangaka = ma; }

void Manga::setPublisher(const string& pu) { publisher = pu; }

void Manga::setCapitoli(const unsigned int& nc) { numeroCapitoli = nc; }

void Manga::setGenere(const Genere& ge) { genere = ge; }