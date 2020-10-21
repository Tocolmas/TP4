#include <stdio.h>


int main(int argc, char* argv[])
{
    char C = 'z';
    int voy[7] = {0};
/* sortie de boucle si la touche Entrée est appuyée*/
    while(C != '\n')
    {
      printf("veuillez taper la chaine de caractere:\n\n");
      scanf("%c", &C);

      /* compteur de voyelles */
      switch(C)
      {
        case 'a': voy[0]++;
        break;

        case 'e': voy[1]++;
        break;

        case 'i': voy[2]++;
        break;

        case 'o': voy[3]++;
        break;

        case 'u': voy[4]++;
        break;

        case 'y': voy[5]++;
        break;

        default:
        break;
      }
    }

    /* affichage des voyelles */
    if (voy[0] > 0)    printf("\n%d a\n", voy[0]);
    if (voy[1] > 0)    printf("\n%d e\n", voy[1]);
    if (voy[2] > 0)    printf("\n%d i\n", voy[2]);
    if (voy[3] > 0)    printf("\n%d o\n", voy[3]);
    if (voy[4] > 0)    printf("\n%d u\n", voy[4]);
    if (voy[5] > 0)    printf("\n%d y\n", voy[5]);
    if (voy [0] > 0, voy[1] > 0, voy[2] > 0, voy[3] > 0, voy[4] > 0, voy[5] > 0);     printf("la chaine de caractère contient les 5 voyelles\n%d a\n", voy[0], voy[1], voy[2], voy[3], voy[4], voy[5]);

    return 0;
}
