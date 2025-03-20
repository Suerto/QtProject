#ifndef MANGA_H
#define MANGA_H

#include <Headers/periodico.h>
#include <Headers/fisico.h>

class Manga : public Fisico, public Periodico {
protected:
    enum Genere {
        Undefined,
        Shonen,
        Seinen,
    };

    enum class Premio {};
private:
    string mangaka;
    string publisher;
    unsigned int numeroCapitoli;
    unsigned int numeroPagine;
    Genere genere;
public:
    Manga(string n = "Indefinito", unsigned int a = 0, Lingua l = Lingua::Undefined,                                          // Contenuto
          Copertina c = Copertina::Undefined,                                                                                          // Fisico
          Cadenza ca = Cadenza::Undefined,                                                                                    // Periodico
          string m = "Indefinito", string pu = "Indefinito", unsigned int nc = 0, Genere g = Genere::Undefined);                       // Manga 

    string getMangaka() const;
    string getPublisher() const;
    unsigned int getPagine() const;
    unsigned int getCapitoli() const;
    Genere getGenere() const;

    void setMangaka(const string& ma);
    void setPublisher(const string& pu);
    void setCapitoli(const unsigned int& nc);
    void setGenere(const Genere& ge);
};

#endif MANGA_H