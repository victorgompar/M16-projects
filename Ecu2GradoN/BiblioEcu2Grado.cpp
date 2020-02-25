#include <math.h>
#include "BiblioEcu2Grado.h"

int tarea2(double ia, double ib, double ic, double& ox1, double& ox2) {
	double discr;
	discr = ib * ib - 4 * ia * ic;
	int inumSols;

	if (discr < 0) {
		inumSols = 0;
	}
	else if (discr == 0) {
		inumSols = 1;
		ox1 = (-ib + sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);
	}
	else {
		ox1 = (-ib + sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);
		ox2 = (ib + sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);
		inumSols = 2;
	}
	return inumSols;
}
