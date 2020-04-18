// Ne trimite daca este pe linie sau nu
// Si in ce directie trebuie sa o ia
// citim cei 4 senzori
// TODO: Corectie in functie de lumina
//
// vedem daca valoarea este mai mare de 900(este pe alb) sau mai mica de 850(elte pe negru)
// daca senzorii dreapta, stanga >900
// daca senzori mijloc dreapta,stanga <850 
// merge in fata
// daca senzorul mijloc dreapta este >900 si senzorul mijloc stanga <850
// vireaza usor stanga
// pana cand senzor mijloc dreapta <850
// daca senzorul mijloc dreapta este <850 si senzorul mijloc stanga >900
// vireaza usor dreapta
// pana cand senzor mijloc stanga <850
// TODO: Daca nu gaseste nici o linie
// TODO: Daca toti senzorii sunt pe linie