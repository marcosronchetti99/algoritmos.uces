#include<stdio.h>

 int main()
{

	double auto1,auto2,auto3;
	double seg1,seg2,seg3;
	double promedio1,promedio2,promedio3;

	printf("ingrese la distancia recorrida el auto 1\n");
	scanf ("%lf",&auto1);

	printf("ingrese el tiempo del auto 1\n");
	scanf ("%lf",&seg1);

	printf("ingrese la distancia recorrida el auto 2\n");
	scanf ("%lf",&auto2);

	printf("ingrese el tiempo del auto 2\n");
	scanf ("%lf",&seg2);

	printf("ingrese la distancia recorrida el auto 3\n");
	scanf ("%lf",&auto3);

	printf("ingrese el tiempo del auto 3\n");
	scanf ("%lf",&seg3);

	promedio1 = (auto1 / seg1) *3.6;

	promedio2 = (auto2 / seg2) *3.6;

	promedio3 = (auto3 / seg3) *3.6;

	if (promedio1 >= promedio2) && (promedio1 >=promedio3) && (promedio2 >= promedio3);

			printf("auto1: %.2lf \n", promedio1);
			printf("auto2: %.2lf \n", promedio2);
			printf("auto3: %.2lf \n", promedio3);



		if (promedio1 >= promedio2) && (promedio1 >=promedio3) && (promedio3 >= promedio2);

		    	printf("auto1: %.2lf \n", promedio1);
				printf("auto3: %.2lf \n", promedio3);
				printf("auto2: %.2lf \n", promedio2);


			if (promedio2 >= promedio1) && (promedio2 >=promedio3) && (promedio3 >= promedio1);


					printf("auto2: %.2lf \n", promedio2);
					printf("auto3: %.2lf \n", promedio3);
					printf("auto1: %.2lf \n", promedio1);


				if (promedio2 >= promedio1) && (promedio2 >=promedio3) && (promedio1 >= promedio3);

						printf("auto1: %.2lf \n", promedio1);
						printf("auto2: %.2lf \n", promedio2);
						printf("auto3: %.2lf \n", promedio3);


					if (promedio3 >= promedio1) && (promedio3 >=promedio2) && (promedio2 >= promedio1);

							printf("auto3: %.2lf \n", promedio3);
							printf("auto2: %.2lf \n", promedio2);
							printf("auto1: %.2lf \n", promedio1);


						if (promedio3 >= promedio1) && (promedio3 >=promedio2) && (promedio1 >= promedio2);

								printf("auto3: %.2lf \n", promedio3);
								printf("auto1: %.2lf \n", promedio1);
								printf("auto2: %.2lf \n", promedio2);





			return 0;
}#
