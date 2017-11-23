#include <stdio.h>
#include <stdlib.h>

/*
algorithme: Allumettes
but: Jouer au jeu des allumettes
entree: nb allumette retiré
sortie: nb allumette restante et tour_joueur

var
	NbAllumettesMax:entier
	NbAllumettesTirables:entier
	joueur:entier

DEBUT

	ecrire('Bienvenu dans le jeu des allumettes, bonne chance!')
	NbAllumettesMax<-21
	NbAllumettesTirables<-0
	Randomize
	resultatquicommence<-random(2)


	repeter
        debut
		ecrire('Il reste ',NbAllumettesMax,' allumette.')

					si joueur=1 alors
						debut
						ecrire('Joueur 1 : Combien d''allumette voulez-vous prendre ?')
						lire(NbAllumettesTirables)
							si (NbAllumettesTirables<1) ou (NbAllumettesTirables>3) alors
								debut
									ecrire('Ceci n''est pas possible, veuillez recommencez.')
									joueur<-1
								fin
							sinon
								debut
									si (((NbAllumettesMax=3)et(NbAllumettesTirables=3))ou((NbAllumettesMax=2)et(NbAllumettesTirables=2)))alors
										debut
										joueur<-1

										fin
									sinon
										debut
										NbAllumettesMax<-NbAllumettesMax-NbAllumettesTirables
										joueur<-joueur+1
										fin
								fin
						fin

*/

int Choix_Menu(int *selection);

int main()
{
    int NbAllumetteMax = 21;
    int NbAllumetteTirable = 0;
    int joueur = 1;
    int Menu = 0;

    Menu = Choix_Menu(&Menu);
    if (Menu==1)
    {
        printf("Le premier Joueur commence.");
        do
        {
            printf("Il y a %d allumettes restantes\n",NbAllumetteMax);
            if (joueur == 1)
            {
                printf("joueur %d\n",joueur);
                printf("Combien d'allumette voulez vous prendre(1 obligatoire et 3 maximum)?\n");
                fflush(stdin);
                scanf("%d",&NbAllumetteTirable);
                if ((NbAllumetteTirable<1) || (NbAllumetteTirable>3))
                {
                    printf("ceci n'est pas possible, veuillez recommencer\n");
                    joueur = 1;
                }
                else
                {

                       NbAllumetteMax=NbAllumetteMax-NbAllumetteTirable;
                       joueur=joueur+1;
                }
            }
            else if (joueur==2)
            {
                printf("joueur %d\n",joueur);
                printf("Combien d'allumette voulez vous prendre(1 obligatoire et 3 maximum)?\n");
                scanf("%d",&NbAllumetteTirable);
                fflush(stdin);
                if ((NbAllumetteTirable<1) || (NbAllumetteTirable>3))
                {
                    printf("ceci n'est pas possible, veuillez recommencer\n");
                    joueur=2;
                }
                else
                {
                       NbAllumetteMax=NbAllumetteMax-NbAllumetteTirable;
                       joueur=joueur-1;
                }
            }
        } while (NbAllumetteMax>0);
    printf("le vainqueur est le joueur %d !\n",joueur);
    system("pause");
    }
    else if(Menu==2)
    {
        printf("Le premier Joueur commence.");
        do
        {
            printf("Il y a %d allumettes restantes\n",NbAllumetteMax);
            if (joueur == 1)
            {
                printf("joueur %d\n",joueur);
                printf("Combien d'allumette voulez vous prendre(1 obligatoire et 3 maximum)?\n");
                fflush(stdin);
                scanf("%d",&NbAllumetteTirable);
                if ((NbAllumetteTirable<1) || (NbAllumetteTirable>3))
                {
                    printf("ceci n'est pas possible, veuillez recommencer\n");
                    joueur = 1;
                }
                else
                {

                       NbAllumetteMax=NbAllumetteMax-NbAllumetteTirable;
                       joueur=joueur+1;
                }
            }
            else if (joueur==2)
            {
                printf("joueur %d\n",joueur);


                if (NbAllumetteMax%4==0)
                {
                    NbAllumetteTirable=3;
                    printf("L'ordinateur tire %d\n",NbAllumetteTirable);
                }else if (NbAllumetteMax%4==3)
                {
                    NbAllumetteTirable=2;
                    printf("L'ordinateur tire %d\n",NbAllumetteTirable);
                }else if (NbAllumetteMax%4==2)
                {
                    NbAllumetteTirable=1;
                    printf("L'ordinateur tire %d\n",NbAllumetteTirable);
                }else if (NbAllumetteMax%4==1)
                {
                    NbAllumetteTirable=1;
                    printf("L'ordinateur tire %d\n",NbAllumetteTirable);
                }

                       NbAllumetteMax=NbAllumetteMax-NbAllumetteTirable;
                       joueur=joueur-1;
                }

        } while (NbAllumetteMax>0);
    printf("le vainqueur est le joueur %d !\n",joueur);
    system("pause");
    }
    return 0;
}


//BUT : Cette fonction permet de selectionner le type de jeu
//ENTREE : Selection_Menu
//Sortie : mode de jeu

int Choix_Menu(int *selection)
{
    printf("Bienvenue dans le jeu des allumettes!\n");
    printf("Veuillez choisir votre mode de joueur. Pour jouer contre un autre joueur, taper 1.\n Sinon, taper 2 pour jouer contre l'ordinateur\n");
    scanf("%d",selection);
    return *selection;
}
