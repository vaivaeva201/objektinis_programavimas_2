#include <iostream>
using std::string;

class Zmogus {
    protected:
        string Vardas_;
        string Pavarde_;
    public:
        Zmogus() : Vardas_(""), Pavarde_("") {}
        Zmogus(string v, string p) : Vardas_(v), Pavarde_(p) {}

        inline string vardas() const { return Vardas_; }
        inline string pavarde() const { return Pavarde_; }

        inline void setVardas(string var) { Vardas_ = var; }
        inline void setPavarde(string pav) { Pavarde_ = pav; }

        virtual ~Zmogus() {
            Vardas_.clear();
            Pavarde_.clear();
        }

         virtual void printInfo() const = 0;
};