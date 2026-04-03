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
        double rez_;
        double Vidurkis_;
        double Mediana_;

    public:
        Studentas() : egz_paz_(0) { }    
        Studentas(std::istream& is);
        ~Studentas(){}

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