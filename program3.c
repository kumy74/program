#include<stdio.h>

int mnoz(int a, int b) { return a * b; }

int dodaj(int a, int b) { return a + b;}

int dziel(int a, int b) {return a / b;}

int odejmij(int a, int b) {return a - b;}
 

int main()
{
		int a = 2, b = 5; /*deklaracja wraz z inicjalizacja */ 
		char wybor;
		
		scanf("%c", &wybor); /* to oznacza czytaj z konsoli i zapisz wartosc pod wybor */
	
/* if -( wyrazenie){ blok jesli wyrazenie prawdziwe} else {blok jesli wyrazenie fałszywe};   */
		if(wybor); /* == to operator ktory sprawdza czy rowne badz rozne */
	        
		printf("wynik mnozenia: %i\n", mnoz(a,b));
		}else{printf("wynik dodawania: %i\n", dodaj(a,b));
		}else{printf("Wynik dzielenia: %i\n", podziel(a,b));
		}else{printf("Wynik odejmowania: %i\n", odejmij(a,b));

	
		int wynik; /*deklaracja zmiennej typu całkowitego, kompilator nie wie co oznacza*/ 
		/*wyraz wynik wiec poleceniem int podpowiadasz mu co ma zrobic - wyswietlic wynik*/
		
		/*wynik = mnoz(a,b); /*wskazuje co ma zrobic, pomnozyc argumenty */

		/*printf("wynik mnozenia: %i\n", wynik);/* wyswietla wynik dzialania  - mnozenia */


		return 0;

}
