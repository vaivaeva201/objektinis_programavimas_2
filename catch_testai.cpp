#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "studentas.h"

TEST_CASE("Studento klasės 'Rule of five' testai", "[studentas]")
{
    SECTION("Copy konstruktorius")
    {
        vector<int> pazymiai = {9, 8, 7, 6, 9};
        Studentas originalus("Vardas", "Pavarde", pazymiai);
        Studentas kopija(originalus);
        
        REQUIRE(kopija == originalus);
    }

    SECTION("Move konstruktorius")
    {
        vector<int> pazymiai = {9, 8, 7, 6, 9};
        Studentas  originalus("Vardas", "Pavarde", pazymiai);
        Studentas  originalus_2("Vardas", "Pavarde", pazymiai);
        Studentas perkeltas(std::move(originalus));

        REQUIRE(perkeltas == originalus_2);
        REQUIRE(originalus.isClear() == true);
    }

    SECTION("Copy assignment operatorius")
    {
        vector<int> pazymiai = {9, 8, 7, 6, 9};
        Studentas originalus("Vardas", "Pavarde", pazymiai);
        Studentas kopija;
        kopija = originalus;
        
        REQUIRE(kopija == originalus);
    }

    SECTION("Move assignment operatorius")
    {
        vector<int> pazymiai = {9, 8, 7, 6, 9};
        Studentas  originalus("Vardas", "Pavarde", pazymiai);
        Studentas  originalus_2("Vardas", "Pavarde", pazymiai);
        Studentas perkeltas;
        perkeltas= std::move(originalus);

        REQUIRE(perkeltas == originalus_2);
        REQUIRE(originalus.isClear() == true);
    }

    SECTION("Objekto išvalymas (Clear)")
    {
        Studentas s;
        s.Clear();
        
        REQUIRE(s.isClear());
    }
}