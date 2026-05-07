#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "studentas.h"

TEST_CASE("Studento klasės 'Rule of five' testai", "[studentas]")
{
    SECTION("Copy konstruktorius")
    {
        vector<int> pazymiai = {9, 8, 7, 6, 9};
        Studentas originalus("Vardas", "Pavardė", pazymiai);
        Studentas kopija(originalus);
        
        REQUIRE(kopija == originalus);
    }

    SECTION("Move konstruktorius")
    {
        vector<int> pazymiai = {9, 8, 7, 6, 9};
        Studentas  originalus("Vardas", "Pavardė", pazymiai);
        Studentas  originalus_2("Vardas", "Pavardė", pazymiai);
        Studentas perkeltas(std::move(originalus));

        REQUIRE(perkeltas == originalus_2);
        REQUIRE(originalus.Clear() == true);
    }
}