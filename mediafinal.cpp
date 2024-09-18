#include <stdio.h>


int main()
{
   float notaA1, notaA2, notaAF, menornota, media;
     
      do { // entrada da primeira nota
         printf ("Digite a nota da A1: ");
         scanf ("%f", &notaA1);
            if (notaA1 < 0 || notaA1 > 5)
            {
            printf ("Nota inválida! Insira novamente.\n");
            }
      }  while (notaA1 < 0 || notaA1 > 5);

     
      do { // entrada da segunda nota
         printf ("Digite a nota da A2: ");
         scanf ("%f", &notaA2);
            if (notaA2 < 0 || notaA2 > 5)
            {
            printf ("Nota inválida! Insira novamente.\n");
            }
      }  while (notaA2 < 0 || notaA2 > 5);
     
   
      media = notaA1 + notaA2; // calculando a média
         if(media >= 6)
         {
         printf ("Aluno Aprovado! %.2f\n", media); // o .2 = quantidade de casas decimais
         }  else
            {  if(notaA1 < notaA2)
               {
               (menornota = notaA1);
               } else
                  {
                  (menornota = notaA2);
                  }         
                     do {  // entrada da nota substitutiva
                        printf ("Digite a nota na avaliação substitutiva: ");
                        scanf ("%f", &notaAF);
                           if (notaAF < 0 || notaAF > 5)
                           {
                           printf("Nota inválida! Insira novamente.\n");
                           }
                     }  while (notaAF < 0 || notaAF > 5);
         
               media = media - menornota + notaAF; // subistituindo a menor nota pela AF
     
                  if (media >= 6.0)
                  {
                  printf ("Aprovado em Avaliação Final! \n %.2f", media);
                  }  else
                     {
                     printf ("Reprovado em Avaliação Final! \n %.2f", media);
                     }
            }

   return 0;
}