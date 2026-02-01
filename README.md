IMPR Handin 2
Skriv dit program i handin2.c

Ciffer-tæller
Målet med denne opgave er at træne dig i programmering med løkker, herunder at vælge gode iterative kontrolstrukturer til opgaven. Som altid er det også målet at lave et velopstillet program med god indrykning, og med brug af gode variabelnavne.

I denne opgave skal du skrive et program, der kan tælle hvor mange tal (fra 1 til n) der indeholder et bestemt ciffer c. For eksempel er der 19 tal fra 1 til 100 der indeholder cifferet 5. (Vi bruger det almindelige 10-talsystem i denne opgave).

Vi starter med en simplere opgave og bygger os frem mod en komplet løsning. Du skal bare aflevere den færdige version (eller så langt du nåede).

Programmet skal indlæse to heltal n og c. Cifferet c skal være et heltal mellem 0 og 9, og n skal være mindst 1. (Du kan printe en fejlbesked, hvis brugeren indtaster et ugyldigt input).

Som en opvarmning til den egentlige opgave, kan du skrive et program, der tjekker om n slutter på cifret c. (Hint: du kan benytte modulo-operatoren til dette.)

Næste skridt er at omskrive programmet, så det kan tjekke om n indeholder cifret c. Hvilken iterativ kontrolstruktur kan du bruge til at opnå dette? Overvej omhyggeligt hvordan løkken starter, og hvordan den slutter. Tag gerne inspiration fra følgende regne-eksempel, hvor jeg har beskrevet processen for et konkret tal og ciffer.
```
Indeholder 7264 cifret 2?
    Slutter 7264 på 2?
    Nej
    Divider med 10 (heltalsdivision) = 726
Indeholder 726 cifret 2?
    Slutter 726 på 2?
    Nej
    Divider med 10 (heltalsdivision) = 72
Indeholder 72 cifret 2?
    Slutter 72 på 2?
    Ja
    Derfor indeholder 7264 cifret 2.
```
