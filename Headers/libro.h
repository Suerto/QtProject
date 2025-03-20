#ifndef LIBRO_H
#define LIBRO_H

#include <Headers/fisico.h>

class Libro : public Fisico {
protected:
    enum Genere {
        Undefined,
        Biografia,
        Storico,
        Giallo,
        Avventura,
        Thriller,
        Fantasy,
    };
private:
    string autore;
    string editore;
    string publisher;
    unsigned int numeroPagine;
    Genere genere;
public:
    Libro(string n = "", unsigned int a = 0, Lingua l = Lingua::Undefined, Copertina c = Copertina::Undefined, string au = "", string ed = "", string pu = "", unsigned int np = 0, Genere g = Genere::Undefined);

    string getAutore() const;
    string getEditore() const;
    string getPublisher() const;
    unsigned int getPagine() const;
    string getGenere() const;

    void setAutore(const string& au);
    void setEditore(const string& ed);
    void setPublisher(const string& pu);
    void setPagine(const unsigned int& np);
    void setGenere(const Genere& ge);
};

#endif LIBRO_H