/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"


void
simp_prog_1(char *host, operands ab)
{
	CLIENT *clnt;
	int  *result_1;
	operands  fatorial_1_arg;
	int  *result_2;
	operands  modulo_1_arg;
	int  *result_3;
	operands  max_1_arg;
	int  *result_4;
	operands  soma_1_arg;
	int  *result_5;
	operands  subtracao_1_arg;
	int  *result_6;
	operands  devisao_1_arg;
	int  *result_7;
	operands  multiplicacao_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SIMP_PROG, SIMP_VERSION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = fatorial_1(&ab, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = modulo_1(&ab, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = max_1(&ab, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = soma_1(&ab, clnt);
	if (result_4 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_5 = subtracao_1(&ab, clnt);
	if (result_5 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_6 = devisao_1(&ab, clnt);
	if (result_6 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_7 = multiplicacao_1(&ab, clnt);
	if (result_7 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	// Arguments.
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);


	operands ab;
	ab.x = a;
	ab.y = b;
	
	// Debug:
	// printf("A: %d\n", a);
	// printf("B: %d\n", b);
	
	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	simp_prog_1 (host, ab);
exit (0);
}