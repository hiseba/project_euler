//	Factorial digit sum
//	Find the sum of the digits in the number 100!

#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
 
int main (int argc,const char *argv[]){
	mpz_t result;
	mpz_t sum;
	mpz_t aux;

	mpz_init(result);
	mpz_init(sum);
	mpz_init(aux);

	mpz_fac_ui(result,100);

	while(mpz_sgn (result)>0){
		mpz_mod_ui(aux, result, 10);
		mpz_add(sum,sum,aux);
		mpz_div_ui (result, result, (unsigned long int) 10);
	}

	gmp_printf("%Zd\n", sum);

	/* free used memory */
	mpz_clear(sum);
	mpz_clear(aux);
	mpz_clear(result);
	return EXIT_SUCCESS;
}
