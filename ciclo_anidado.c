/*
    Ciclo Anidado Ej. 1
        Ejem. Usando ciclos introduzca por teclado las notas de 20 alumnos de un grupo.
            Cada alumno recibe 10 materias diferentes. Imprima dichas notas.
*/
    #include <stdio.h>
        #include <math.h>
        int main()
        {
            int i = 0;
            int j = 0;
            int nota = 0;

            for(i = 1; i <= 3; i = i + 1){
                printf("Alumno %d\n", i);
                for(j = 1; j <= 10; j = j + 1){
                    printf("Ingrese la nota %d: ", j);
                    scanf("%d", &nota);
                }
            }
            return 0;
        }