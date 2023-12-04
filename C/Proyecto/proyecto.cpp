#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Usuarios
{
    char nombre[30];
    char cont[10];
    int j1, j2, j3;
};

FILE *ap;

char nombreAct[30], contraAct[10];
int j1Act, j2Act, j3Act;

int Registrar();
void iniciar();
int buscar(char *cad);
void verEstadisticas();

void J1();
void J2();
void J3();
void MenuNiveles();

int main()
{
    int op;
    printf("---BIENVENIDO AL LABERINTO---\n");
    printf("          ---MENU---\n");
    printf("      Que quieres hacer?\n");

    do
    {
        printf("\n");
        printf("1. Registrarte\n");
        printf("2. Iniciar Sesion\n");
        printf("3. Salir\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            Registrar();
            break;

        case 2:
            iniciar();

            do
            {
                printf("\n");
                printf("---MENU---\n");
                printf("1. Jugar\n");
                printf("2. Estadisticas\n");
                printf("3. Salir\n");
                scanf("%d", &op);

                switch (op)
                {
                case 1:
                    MenuNiveles();
                    break;

                case 2:
                    verEstadisticas();
                    break;

                default:
                    break;
                }
            } while (op < 3);

            break;

        default:
            break;
        }
    } while (op < 3);
}

int Registrar()
{
    char nom[30], con[10], c;
    int n = 0, m;
    ap = fopen("datos.txt", "r");

    if (ap == NULL)
    {
        printf("Ingresa el nuevo usuario:\n");
        fflush(stdin);
        gets(nom);
        printf("Ingresa la contraseña de usuario:\n");
        fflush(stdin);
        gets(con);
        ap = fopen("datos.txt", "w");

        fprintf(ap, "%s %s %d %d %d", nom, con, 0, 0, 0);
        fclose(ap);
    }
    else
    {
        Usuarios U[100];

        while (feof(ap) == NULL)
        {
            fscanf(ap, "%s", &U[n].nombre);
            fscanf(ap, "%s", &U[n].cont);
            fscanf(ap, "%d", &U[n].j1);
            fscanf(ap, "%d", &U[n].j2);
            fscanf(ap, "%d", &U[n].j3);
            n++;
        }
        fclose(ap);
        printf("%d", n);

        do
        {
            printf("Ingresa el nuevo usuario:\n");
            fflush(stdin);
            gets(nom);

            if (buscar(nom) == 0)
            {
                printf("Usuario Valido.\n");
                printf("Ingresa la contraseña de usuario:\n");
                fflush(stdin);
                gets(con);
                break;
            }
            else
            {
                printf("Usuario Ya Existe.\n");
            }
        } while (buscar(nom) == 1);

        strcpy(U[n].nombre, nom);
        strcpy(U[n].cont, con);
        U[n].j1 = 0;
        U[n].j2 = 0;
        U[n].j3 = 0;

        ap = fopen("datos.txt", "w");

        fprintf(ap, " %-30s %-10s %-5s %-5s %-5s\n", "Nombre", "Contraseña", "J1", "J2", "J3");
        for (int i = 0; i <= n; i++)
        {
            fprintf(ap, " %-30s %-10s %-5d %-5d %-5d\n", U[i].nombre, U[i].cont, U[i].j1, U[i].j2, U[i].j3);
        }
        fclose(ap);
    }
}

int buscar(char *cad)
{
    char cadAux[30];
    ap = fopen("datos.txt", "r");

    while (feof(ap) == NULL)
    {
        fscanf(ap, "%s", &cadAux);

        if (strcmp(cad, cadAux) == 0)
        {
            fclose(ap);
            return 1;
        }
    }
    fclose(ap);
    return 0;
}

void iniciar()
{
    char nomAux[30], contAux[10];
    int b = 0;

    printf("Dame tu nombre: ");
    fflush(stdin);
    gets(nombreAct);

    printf("Dame tu contraseña: ");
    fflush(stdin);
    gets(contraAct);

    ap = fopen("datos.txt", "r");
    while (feof(ap) == NULL)
    {
        fscanf(ap, "%s", &nomAux);

        if (strcmp(nombreAct, nomAux) == 0)
        {
            b = 1;
            fscanf(ap, "%s", &contAux);
            if (strcmp(contraAct, contAux) == 0)
            {
                printf("\nBienvenido!!!\n");
                fscanf(ap, "%d", &j1Act);
                fscanf(ap, "%d", &j2Act);
                fscanf(ap, "%d", &j3Act);
                verEstadisticas();
            }
            else
            {
                printf("\nError en contraseña.\n");
            }
        }
    }
    if (b == 0)
    {
        printf("\nUsuario Inexistente, registrate primero.\n");
    }
}

void verEstadisticas()
{
    printf("\n");
    printf("Tus estadisticas son: \n");
    printf("Juegos jugados del nivel 1: %d\n", j1Act);
    printf("Juegos jugados del nivel 2: %d\n", j2Act);
    printf("Juegos jugados del nivel 3: %d\n", j3Act);
}

void J1()
{
    char Lab[10][10];
    int i, j;
    char op;

    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            Lab[i][j] = '&';

    /*camino Laberinto*/
    Lab[1][0] = Lab[1][1] = Lab[2][1] = Lab[3][1] = Lab[4][1] = Lab[4][2] = Lab[4][3] = Lab[5][3] = Lab[6][3] = Lab[7][3] =
        Lab[8][3] = Lab[8][4] = Lab[8][5] = Lab[8][6] = Lab[8][7] = Lab[7][7] = Lab[6][7] = Lab[6][6] = Lab[5][6] = Lab[4][6] =
            Lab[3][6] = Lab[3][7] = Lab[2][7] = Lab[1][7] = Lab[1][8] = Lab[1][9] = ' ';

    system("cls");
    for (int f = 0; f < 10; f++)
    {
        for (int c = 0; c < 10; c++)
            printf(" %c", Lab[f][c]);
        printf("\n");
    }

    i = 1, j = 0;

    while (i != 1 || j != 9)
    {
        printf("Presiona w (Arriba), A (Izquierda), S (Abajo), D (Derecha).\n");
        fflush(stdin);
        op = getchar();

        switch (op)
        {
        case 'w': // Arriba
            i--;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                i++;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 10; f++)
                {
                    for (int c = 0; c < 10; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i + 1][j] = '-';
                system("cls");
                for (int f = 0; f < 10; f++)
                {
                    for (int c = 0; c < 10; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 's': // Abajo
            i++;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                i--;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 10; f++)
                {
                    for (int c = 0; c < 10; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i - 1][j] = '-';
                system("cls");
                for (int f = 0; f < 10; f++)
                {
                    for (int c = 0; c < 10; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 'a': // Izquierda
            j--;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                j++;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 10; f++)
                {
                    for (int c = 0; c < 10; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i][j + 1] = '-';
                system("cls");
                for (int f = 0; f < 10; f++)
                {
                    for (int c = 0; c < 10; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 'd': // Derecha
            j++;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                j--;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 10; f++)
                {
                    for (int c = 0; c < 10; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i][j - 1] = '-';
                system("cls");
                for (int f = 0; f < 10; f++)
                {
                    for (int c = 0; c < 10; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        default:
            break;
        }
    }
    if (i == 1 && j == 9)
    {
        printf("\n");
        printf("¡¡¡¡¡LOGRASTE SALIR!!!!!\n");
    }
}

void J2()
{
    char Lab[20][20];
    int i, j;
    char op;

    for (i = 0; i < 20; i++)
        for (j = 0; j < 20; j++)
            Lab[i][j] = '&';

    /*camino Laberinto*/
    Lab[1][0] = Lab[1][1] = Lab[2][1] = Lab[2][2] = Lab[2][3] = Lab[3][3] = Lab[4][3] = Lab[5][3] = Lab[5][2] = Lab[5][1] =
        Lab[6][1] = Lab[7][1] = Lab[8][1] = Lab[9][1] = Lab[10][1] = Lab[10][2] = Lab[10][3] = Lab[11][3] = Lab[12][3] = Lab[13][3] =
            Lab[14][3] = Lab[15][3] = Lab[16][3] = Lab[16][2] = Lab[16][1] = Lab[17][1] = Lab[18][1] = Lab[18][2] = Lab[18][3] = Lab[18][4] =
                Lab[18][5] = Lab[18][6] = Lab[18][7] = Lab[17][7] = Lab[16][7] = Lab[16][7] = Lab[15][7] = Lab[14][7] = Lab[13][7] = Lab[12][7] =
                    Lab[11][7] = Lab[10][7] = Lab[10][6] = Lab[10][5] = Lab[9][5] = Lab[8][5] = Lab[8][6] = Lab[8][7] = Lab[7][7] = Lab[6][7] =
                        Lab[5][7] = Lab[4][7] = Lab[3][7] = Lab[2][7] = Lab[2][8] = Lab[2][9] = Lab[2][10] = Lab[3][10] = Lab[4][10] = Lab[5][10] =
                            Lab[6][10] = Lab[7][10] = Lab[8][10] = Lab[8][11] = Lab[9][11] = Lab[10][11] = Lab[11][11] = Lab[12][11] = Lab[12][10] = Lab[13][10] =
                                Lab[14][10] = Lab[15][10] = Lab[16][10] = Lab[16][11] = Lab[15][11] = Lab[15][12] = Lab[15][13] = Lab[14][13] = Lab[13][13] = Lab[12][13] =
                                    Lab[11][13] = Lab[10][13] = Lab[9][13] = Lab[8][13] = Lab[7][13] = Lab[6][13] = Lab[5][13] = Lab[4][13] = Lab[4][12] = Lab[3][12] =
                                        Lab[2][12] = Lab[2][13] = Lab[2][14] = Lab[2][15] = Lab[2][16] = Lab[2][17] = Lab[2][18] = Lab[3][18] = Lab[4][18] = Lab[5][18] =
                                            Lab[5][17] = Lab[5][16] = Lab[5][15] = Lab[6][15] = Lab[7][15] = Lab[7][16] = Lab[7][17] = Lab[7][18] = Lab[8][18] = Lab[9][18] =
                                                Lab[10][18] = Lab[11][18] = Lab[12][18] = Lab[12][17] = Lab[12][16] = Lab[12][15] = Lab[13][15] = Lab[14][15] = Lab[15][15] = Lab[16][15] =
                                                    Lab[17][15] = Lab[17][16] = Lab[17][17] = Lab[17][18] = Lab[18][18] = Lab[19][18] = ' ';

    system("cls");
    for (int f = 0; f < 20; f++)
    {
        for (int c = 0; c < 20; c++)
            printf(" %c", Lab[f][c]);
        printf("\n");
    }

    i = 1, j = 0;

    while (i != 19 || j != 18)
    {
        printf("Presiona w (Arriba), A (Izquierda), S (Abajo), D (Derecha).\n");
        fflush(stdin);
        op = getchar();

        switch (op)
        {
        case 'w': // Arriba
            i--;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                i++;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 20; f++)
                {
                    for (int c = 0; c < 20; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i + 1][j] = '-';
                system("cls");
                for (int f = 0; f < 20; f++)
                {
                    for (int c = 0; c < 20; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 's': // Abajo
            i++;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                i--;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 20; f++)
                {
                    for (int c = 0; c < 20; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i - 1][j] = '-';
                system("cls");
                for (int f = 0; f < 20; f++)
                {
                    for (int c = 0; c < 20; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 'a': // Izquierda
            j--;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                j++;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 20; f++)
                {
                    for (int c = 0; c < 20; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i][j + 1] = '-';
                system("cls");
                for (int f = 0; f < 20; f++)
                {
                    for (int c = 0; c < 20; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 'd': // Derecha
            j++;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                j--;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 20; f++)
                {
                    for (int c = 0; c < 20; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i][j - 1] = '-';
                system("cls");
                for (int f = 0; f < 20; f++)
                {
                    for (int c = 0; c < 20; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        default:
            break;
        }
    }
    if (i == 19 && j == 18)
    {
        printf("\n");
        printf("¡¡¡¡¡LOGRASTE SALIR!!!!!\n");
    }
}

void J3()
{
    char Lab[30][30];
    int i, j;
    char op;

    for (i = 0; i < 30; i++)
        for (j = 0; j < 30; j++)
            Lab[i][j] = '&';

    /*camino Laberinto*/
    Lab[1][0] = Lab[1][1] = Lab[1][2] = Lab[2][2] = Lab[3][2] = Lab[3][1] = Lab[4][1] = Lab[5][1] = Lab[6][1] = Lab[6][2] =
        Lab[6][3] = Lab[6][4] = Lab[6][5] = Lab[5][5] = Lab[4][5] = Lab[3][5] = Lab[3][4] = Lab[2][4] = Lab[1][4] = Lab[1][5] =
            Lab[1][6] = Lab[1][7] = Lab[1][8] = Lab[1][9] = Lab[1][10] = Lab[1][11] = Lab[1][12] = Lab[1][13] = Lab[1][14] = Lab[2][14] =
                Lab[3][14] = Lab[3][13] = Lab[3][12] = Lab[4][12] = Lab[5][12] = Lab[5][11] = Lab[5][10] = Lab[4][10] = Lab[3][10] = Lab[3][9] =
                    Lab[3][8] = Lab[4][8] = Lab[5][8] = Lab[6][8] = Lab[7][8] = Lab[8][8] = Lab[9][8] = Lab[9][7] = Lab[9][6] = Lab[9][5] =
                        Lab[9][4] = Lab[9][3] = Lab[9][2] = Lab[9][1] = Lab[10][1] = Lab[11][1] = Lab[12][1] = Lab[13][1] = Lab[14][1] = Lab[14][2] =
                            Lab[14][3] = Lab[13][3] = Lab[13][4] = Lab[13][5] = Lab[14][5] = Lab[15][5] = Lab[16][5] = Lab[17][5] = Lab[18][5] = Lab[18][4] =
                                Lab[18][3] = Lab[18][2] = Lab[18][1] = Lab[19][1] = Lab[20][1] = Lab[21][1] = Lab[22][1] = Lab[23][1] = Lab[24][1] = Lab[25][1] =
                                    Lab[26][1] = Lab[26][2] = Lab[26][3] = Lab[25][3] = Lab[24][3] = Lab[23][3] = Lab[23][4] = Lab[22][4] = Lab[22][5] = Lab[22][6] =
                                        Lab[22][7] = Lab[21][7] = Lab[20][7] = Lab[19][7] = Lab[18][7] = Lab[17][7] = Lab[16][7] = Lab[15][7] = Lab[14][7] = Lab[13][7] =
                                            Lab[12][7] = Lab[12][8] = Lab[12][9] = Lab[13][9] = Lab[13][10] = Lab[13][11] = Lab[12][11] = Lab[11][11] = Lab[10][11] = Lab[10][10] =
                                                Lab[9][10] = Lab[8][10] = Lab[8][11] = Lab[8][12] = Lab[8][13] = Lab[8][14] = Lab[7][14] = Lab[7][15] = Lab[7][16] = Lab[6][16] =
                                                    Lab[5][16] = Lab[4][16] = Lab[3][16] = Lab[2][16] = Lab[2][17] = Lab[2][18] = Lab[2][19] = Lab[2][20] = Lab[2][21] = Lab[2][22] =
                                                        Lab[2][23] = Lab[2][24] = Lab[3][24] = Lab[4][24] = Lab[5][24] = Lab[5][23] = Lab[5][22] = Lab[5][21] = Lab[5][20] = Lab[5][19] =
                                                            Lab[6][19] = Lab[7][19] = Lab[7][18] = Lab[8][18] = Lab[9][18] = Lab[9][19] = Lab[9][20] = Lab[9][21] = Lab[9][22] = Lab[9][23] =
                                                                Lab[9][24] = Lab[9][25] = Lab[9][26] = Lab[8][26] = Lab[7][26] = Lab[6][26] = Lab[5][26] = Lab[4][26] = Lab[3][26] = Lab[2][26] =
                                                                    Lab[2][27] = Lab[2][28] = Lab[3][28] = Lab[4][28] = Lab[5][28] = Lab[6][28] = Lab[7][28] = Lab[8][28] = Lab[9][28] = Lab[10][28] =
                                                                        Lab[11][28] = Lab[12][28] = Lab[13][28] = Lab[14][28] = Lab[15][28] = Lab[16][28] = Lab[17][28] = Lab[18][28] = Lab[19][28] = Lab[20][28] =
                                                                            Lab[21][28] = Lab[22][28] = Lab[23][28] = Lab[24][28] = Lab[25][28] = Lab[26][28] = Lab[27][28] = Lab[27][27] = Lab[27][26] = Lab[27][25] =
                                                                                Lab[26][25] = Lab[25][25] = Lab[24][25] = Lab[23][25] = Lab[23][26] = Lab[22][26] = Lab[21][26] = Lab[20][26] = Lab[19][26] = Lab[18][26] =
                                                                                    Lab[17][26] = Lab[16][26] = Lab[15][26] = Lab[14][26] = Lab[13][26] = Lab[13][25] = Lab[13][24] = Lab[13][23] = Lab[14][23] = Lab[15][23] =
                                                                                        Lab[16][23] = Lab[17][23] = Lab[17][24] = Lab[18][24] = Lab[19][24] = Lab[20][24] = Lab[20][23] = Lab[21][23] = Lab[22][23] = Lab[23][23] =
                                                                                            Lab[24][23] = Lab[25][23] = Lab[25][22] = Lab[25][21] = Lab[25][20] = Lab[25][19] = Lab[24][19] = Lab[23][19] = Lab[22][19] = Lab[21][19] =
                                                                                                Lab[20][19] = Lab[19][19] = Lab[18][19] = Lab[17][19] = Lab[16][19] = Lab[15][19] = Lab[14][19] = Lab[13][19] = Lab[12][19] = Lab[12][18] =
                                                                                                    Lab[12][17] = Lab[12][16] = Lab[12][15] = Lab[12][14] = Lab[13][14] = Lab[14][14] = Lab[15][14] = Lab[16][14] = Lab[16][15] = Lab[16][16] =
                                                                                                        Lab[16][17] = Lab[17][17] = Lab[18][17] = Lab[19][17] = Lab[19][16] = Lab[19][15] = Lab[19][14] = Lab[19][13] = Lab[19][12] = Lab[18][12] =
                                                                                                            Lab[17][12] = Lab[16][12] = Lab[16][11] = Lab[16][10] = Lab[16][9] = Lab[17][9] = Lab[18][9] = Lab[19][9] = Lab[20][9] = Lab[21][9] =
                                                                                                                Lab[21][10] = Lab[21][11] = Lab[21][12] = Lab[21][13] = Lab[21][14] = Lab[21][15] = Lab[21][16] = Lab[22][16] = Lab[23][16] = Lab[24][16] =
                                                                                                                    Lab[25][16] = Lab[26][16] = Lab[27][16] = Lab[27][15] = Lab[27][14] = Lab[27][13] = Lab[27][12] = Lab[27][11] = Lab[27][10] = Lab[27][9] =
                                                                                                                        Lab[26][9] = Lab[25][9] = Lab[24][9] = Lab[24][8] = Lab[24][7] = Lab[24][6] = Lab[25][6] = Lab[26][6] = Lab[27][6] = Lab[28][6] =
                                                                                                                            Lab[28][5] = Lab[28][4] = Lab[28][3] = Lab[28][2] = Lab[28][1] = Lab[29][1] = ' ';

    system("cls");
    for (int f = 0; f < 30; f++)
    {
        for (int c = 0; c < 30; c++)
            printf(" %c", Lab[f][c]);
        printf("\n");
    }

    i = 1, j = 0;

    while (i != 29 || j != 1)
    {
        printf("Presiona w (Arriba), A (Izquierda), S (Abajo), D (Derecha).\n");
        fflush(stdin);
        op = getchar();

        switch (op)
        {
        case 'w': // Arriba
            i--;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                i++;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 30; f++)
                {
                    for (int c = 0; c < 30; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i + 1][j] = '-';
                system("cls");
                for (int f = 0; f < 30; f++)
                {
                    for (int c = 0; c < 30; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 's': // Abajo
            i++;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                i--;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 30; f++)
                {
                    for (int c = 0; c < 30; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i - 1][j] = '-';
                system("cls");
                for (int f = 0; f < 30; f++)
                {
                    for (int c = 0; c < 30; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 'a': // Izquierda
            j--;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                j++;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 30; f++)
                {
                    for (int c = 0; c < 30; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i][j + 1] = '-';
                system("cls");
                for (int f = 0; f < 30; f++)
                {
                    for (int c = 0; c < 30; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        case 'd': // Derecha
            j++;
            if (Lab[i][j] == '&')
            {
                printf("Intenta de nuevo.\n");
                j--;
                Lab[i][j] = 'x';
                system("cls");
                for (int f = 0; f < 30; f++)
                {
                    for (int c = 0; c < 30; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
            else if (Lab[i][j] == ' ' || Lab[i][j] == '-')
            {
                Lab[i][j] = '/';
                Lab[i][j - 1] = '-';
                system("cls");
                for (int f = 0; f < 30; f++)
                {
                    for (int c = 0; c < 30; c++)
                        printf(" %c", Lab[f][c]);
                    printf("\n");
                };
                break;
            }
        default:
            break;
        }
    }
    if (i == 29 && j == 1)
    {
        printf("\n");
        printf("¡¡¡¡¡LOGRASTE SALIR!!!!!\n");
    }
}

void MenuNiveles()
{
    char ch;
    int n = 0;
    struct Usuarios U[100];

    printf("---MENU---\n");
    printf("¿Que nivel te gustaria jugar?\n");

    do
    {
        printf("\n");
        printf("f. Facil\n");
        printf("m. Medio\n");
        printf("d. Dificil\n");
        printf("s. Salir\n");
        printf("\n");
        scanf(" %c", &ch);

        switch (ch)
        {
        case 'f':
            J1();
            j1Act++;
            break;

        case 'm':
            J2();
            j2Act++;
            break;

        case 'd':
            J3();
            j3Act++;
            break;

        default:
            break;
        }

        ap = fopen("datos.txt", "r");

        while (feof(ap) == NULL)
        {
            fscanf(ap, " %s", U[n].nombre);
            fscanf(ap, " %s", U[n].cont);
            fscanf(ap, "%d", &U[n].j1);
            fscanf(ap, "%d", &U[n].j2);
            fscanf(ap, "%d", &U[n].j3);
            n++;
        }
        fclose(ap);

        for (int i = 0; i < n; i++)
        {
            if (strcmp(nombreAct, U[i].nombre) == 0)
            {
                U[i].j1 = j1Act;
                U[i].j2 = j2Act;
                U[i].j3 = j3Act;
            }

            ap = fopen("datos.txt", "w");
            fprintf(ap, " %-30s %-10s %-5s %-5s %-5s\n", "Nombre", "Contraseña", "J1", "J2", "J3");
            for (int i = 0; i < n; i++)
            {
                fprintf(ap, " %-30s %-10s %-5d %-5d %-5d\n", U[i].nombre, U[i].cont, U[i].j1, U[i].j2, U[i].j3);
            }
            fclose(ap);
        }

    } while (ch != 's');
}