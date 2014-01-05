//	Power digit sum
//	What is the sum of the digits of the number 2^1000?

#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
 
int main (int argc,const char *argv[]){
	mpz_t base;
	mpz_t result;
	mpz_t sum;
	mpz_t aux;

	mpz_init(base);
	mpz_init(result);
	mpz_init(sum);
	mpz_init(aux);

	mpz_set_str(base, "2", 10);

	mpz_pow_ui(result,base,1000);
	while(mpz_sgn (result)>0){
		mpz_mod_ui(aux, result, 10);
		mpz_add(sum,sum,aux);
		mpz_div_ui (result, result, (unsigned long int) 10);
	}

	gmp_printf("%Zd\n", sum);

	/* free used memory */
	mpz_clear(base);
	mpz_clear(sum);
	mpz_clear(aux);
	mpz_clear(result);
	return EXIT_SUCCESS;
}
