#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <limits>
#include <random>
#include "RandInt.hpp"
#include <fstream>
#include <sstream>
#include <chrono>

using std:: string;
using std:: vector;
using std:: cout;
using std:: cin;
using std:: accumulate;
using std:: setw;
using std:: left;
using std:: right;
using std:: endl;


class Studentas {
    private:
        string Vardas_;
        string Pavarde_;
        vector <int> paz_;
        int egz_paz_;
        //double rez_;
        double Vidurkis_;
        double Mediana_;

    public:

        Studentas() : Vardas_(""), Pavarde_(""), paz_({0}), egz_paz_(0), Vidurkis_(0.0), Mediana_(0.0) { } 

        Studentas(string v, string p, vector<int> pazymiai) : Vardas_(v), Pavarde_(p), paz_(pazymiai), egz_paz_(0), Vidurkis_(0.0), Mediana_(0.0) { }

        Studentas(std::istream& is);

        // copy konstruktorius
        Studentas(const Studentas& s): 
            Vardas_(s.Vardas_), 
            Pavarde_(s.Pavarde_), 
            paz_(s.paz_), 
            egz_paz_(s.egz_paz_), 
            Vidurkis_(s.Vidurkis_), 
            Mediana_(s.Mediana_) {}

        // move konstruktorius
        Studentas(Studentas&& s) noexcept : 
            Vardas_(move(s.Vardas_)), 
            Pavarde_(move(s.Pavarde_)), 
            paz_(move(s.paz_)),
            egz_paz_(s.egz_paz_),
            Vidurkis_(s.Vidurkis_),
            Mediana_(s.Mediana_) {}

        ~Studentas(){
            Vardas_.clear();
            Pavarde_.clear();
            paz_.clear();
            egz_paz_ = 0;
            Vidurkis_ = 0.0;
            Mediana_ = 0.0;
        }

        inline string vardas() const { return Vardas_; }
        inline string pavarde() const { return Pavarde_; }
        inline const vector<int>& pazymiai() const { return paz_; }
        inline int egzaminas() const { return egz_paz_; }
        inline double vidurkis() const { return Vidurkis_; }
        inline double mediana() const { return Mediana_; }

        inline void setVardas(string var) { Vardas_ = var; }
        inline void setPavarde(string pav) { Pavarde_ = pav; }
        inline void setGalutinisV(double galutVid) { Vidurkis_ = galutVid; }
        inline void setGalutinisM(double galutMed) { Mediana_ = galutMed; }
        inline void setEgzaminas(int egz) {egz_paz_ = egz; }
        inline void setPazymiai(vector<int> paz) {paz_ = paz;}

        void apskaiciuot_vidurkis();
        void apskaiciuoti_mediana();

        // copy assignment operatorius
        Studentas& operator = (const Studentas& s)
        {
            if (this == &s)
                return *this;

            Vardas_ = s.Vardas_;
            Pavarde_ = s.Pavarde_;
            paz_ = s.paz_;
            egz_paz_ = s.egz_paz_;
            Vidurkis_ = s.Vidurkis_;
            Mediana_ = s.Mediana_;

            return *this;
        }
};


void failu_generavimas(int Studentu_sk);
void studentu_skirstymas(vector < Studentas > &grupe);
void isvedimas_i_du_failus (vector < Studentas > &vargsiukai, vector < Studentas > &kietakai);
void skaiciuoti_viska(Studentas &x);
void skaityti_faila_automatiskai(string pav, vector<Studentas>& grupe);
string pasirinkimas ();
void skaityti_faila(vector < Studentas > &grupe);
void duomenu_ivedimas(vector < Studentas > &grupe);
void skaiciu_generevimas(Studentas &A);
void rezultatai (vector < Studentas > &grupe);
void rezultatu_isvedimas(vector < Studentas > &grupe);
bool pagal_varda(const Studentas &a, const Studentas &b);
bool pagal_pavarde(const Studentas &a, const Studentas &b);
bool pagal_vid_did(const Studentas &a, const Studentas &b);
bool pagal_vid_maz(const Studentas &a, const Studentas &b);
bool pagal_med_did(const Studentas &a, const Studentas &b);
bool pagal_med_maz(const Studentas &a, const Studentas &b);
void rikiavimas(vector < Studentas > &grupe);
void meniu(vector < Studentas > &grupe);


#endif