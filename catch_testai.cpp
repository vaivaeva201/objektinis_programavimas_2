#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "studentas.h"

TEST_CASE("Studento klasės 'Rule of five' testai", "[studentas]")
{
    SECTION("Copy konstruktorius")
    {
        vector<int> pazymiai = {9, 8, 7, 6, 9};
        Studentas originalas("Vardas", "Pavardė", pazymiai);
        Studentas kopija(originalas);
        
        REQUIRE(kopija == originalas);
    }
}