#include<stdio.h> /*dolaczenie  biblioteki standardowej input-output, to jest gotowa bibliotek w programie gcc
z ktorej korzystamy podjac polecenia main putchar */ 

/* y=f(x) */
/*   f()=>0 */
int main() /* funkcja głowna programu */
/*int - typ zwracanej wartości (int-wartosc całkowita)*/
{
	puts("Pierwszy program"); /* puts - funkcja z biblioteki standardowej */
				/* puts - put string -*/ 	
				/*wyswietlajaca ciag znakow*/
				/* automatycznie przechodzi do nowej lini*/

putchar('g'); /* wyświetla pojedynczy znak, w tym przypadku to co w nawiasie */ 
putchar('\n'); /*znak konca lini*/
putchar('\t'); /*tabulator*/ 
/*putchar('\r');/*powrót karetki - kursor powraca na początek lini*/
putchar('\\'); /*wypisuje \*/

	return 0;
} /*klamry oznaczaja blok funkcji, zwykle cialo funkcji */ 
// tak tez mozna wpisywac komentarze nie trzeba ich wtedy zamykac
