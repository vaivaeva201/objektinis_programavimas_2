# Antras_Laboratorinis
# v1.1

Ši programa lygina "class" ir "struct" naudojimą. v1.1 versija pritaikyta "class" ir buvo lyginama su v1.0 versijos "struct".
Buvo naudojamas vektor konteineris su 3 strategija.
Pateikti rezultatai yra trijų iteracijų vidurkis.

**"Class" ir "Struct" tyrimas**

| Tipas | Failo dydis | Optiizavimo vėliava | .exe failo dydis | Programos veilimo laikas |
| :--- | :--- | :--- | :--- | :--- |
| CLASS | 100000 | - | 239K | 2.48582 s |
| CLASS | 1000000 | - | 239K | 25.032 s |
| STRUCT |  100000 | - | 238K | 1.93843 s |
| STRUCT |  1000000 | - | 238K | 19.6844 s |
| CLASS | 100000 | -O1 | 121K | 0.84203 s |
| CLASS | 1000000 | - O1 | 121K | 8.11251 s |
| STRUCT |  100000 | -O1 | 120K | 0.714521 s |
| STRUCT |  1000000 | -O1 | 120K | 7.23889 s |
| CLASS | 100000 | -O2 | 121K | 0.816232 s |
| CLASS | 1000000 | -O2 | 121K | 7.9286 s |
| STRUCT |  100000 | -O2 | 120K | 0.672481 s |
| STRUCT |  1000000 | -O2 | 120K | 6.98227 s |
| CLASS | 100000 | -O3 | 121K | 0.792985 s |
| CLASS | 1000000 | -O3 | 121K | 7.81915 s |
| STRUCT |  100000 | -O3 | 120K | 0.668681 s |
| STRUCT |  1000000 | -O3 | 120K | 6.9911 s |