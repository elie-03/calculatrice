/* Calculette simplifiee */

#include <stdio.h>

int main(void)
{
	double nb1, nb2;
	char op, rep;
	do
	{
	printf ("operande : ");
		scanf ("%lf", &nb1);
	printf ("operateur : ");
		scanf (" %c", &op);
	printf ("operande : ");
		scanf ("%lf", &nb2);
		switch (op)
		{
			case '+' :
			printf ("resultat = %f\n", nb1 + nb2);
				break;
			case '-' :
			printf ("resultat = %f\n", nb1 - nb2);
				break;
			case '*' :
			printf ("resultat = %f\n", nb1 * nb2);
				break;
			case '/' :
				if (nb2 == 0)
				{
				printf ("divsion par zero\n");
				}
				else
				{
				printf ("resultat = %f\n", nb1 / nb2);
				}
				break;
			default :
			printf ("operation inconnue\n");
				break;
			}
	printf("une autre operation? o/n : ");
		scanf(" %c", &rep);
	printf("%c",rep);
	}
	while (rep == 'o' || rep == 'O');
	return 0;
}
