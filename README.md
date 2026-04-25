# Antras_Laboratorinis
# v1.5

Šioje versijoje pridėt nauja klasė 'Zmogus', ši klasė yra abstrakti. Dabar klasė 'Studentas' paveldi klasę 'Zmogus', atitinkamai pakeisti konstruktoriai ir destruktorius.

Kadandi klasė 'Zmogus' yra abstrakti negalima sukurti tokio tipo objekto:
* ![Testavimo rezultatai](Screenshot%2026-04-25%at%18.27.05.png)
Patikrinti klases buvo naudoti tie patys testai kaip ir v1.2 versijoje:
* ![Testavimo rezultatai](Screenshot%2026-04-25%at%18.33.35.png)

**"Class" ir "Struct" tyrimas**

Galime patebėti, jog pritaikius 'Rule of Five' ir perdengtus metobus CLASS greičiau atlieka duomenu nuskaitymo ir priskyrimo operacijas.

| Tipas | Failo dydis | Optiizavimo vėliava | .exe failo dydis | Programos veilimo laikas |
| :--- | :--- | :--- | :--- | :--- |
| CLASS | 100000 | - | 257K | 1.68745 s |
| CLASS | 1000000 | - | 257K | 17.0306 s |
| STRUCT |  100000 | - | 238K | 1.93843 s |
| STRUCT |  1000000 | - | 238K | 19.6844 s |
| CLASS | 100000 | -O1 | 136K | 0.582763 s |
| CLASS | 1000000 | - O1 | 136K | 5.99084 s |
| STRUCT |  100000 | -O1 | 120K | 0.714521 s |
| STRUCT |  1000000 | -O1 | 120K | 7.23889 s |
| CLASS | 100000 | -O2 | 138K | 0.55728 s |
| CLASS | 1000000 | -O2 | 138K  | 5.75132 s |
| STRUCT |  100000 | -O2 | 120K | 0.672481 s |
| STRUCT |  1000000 | -O2 | 120K | 6.98227 s |
| CLASS | 100000 | -O3 | 138K | 0.598396 s |
| CLASS | 1000000 | -O3 | 138K | 5.82615 s |
| STRUCT |  100000 | -O3 | 120K | 0.668681 s |
| STRUCT |  1000000 | -O3 | 120K | 6.9911 s |
