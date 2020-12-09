#include <stdio.h>

int main(void) 
{
  float sum, x;
  int anz;
  printf("Dieses Programm liest positive Zahlen ein (Abbruch mit 0) und gibt anschließend den Mittelwert der Zahlen aus\n\n");
  anz=0;  // Initialisierung
  sum=0;
  do
  {
    printf("Bitte %d. Zahl eingeben: ", anz+1);
    scanf("%f", &x);
    anz++;
    sum=sum+x;
  } while(x!=0);  // am Ende der do-while-Schleife muss ein Strichpunkt stehen

  printf("\nMittelwert: %f\n\n",sum/(anz-1));
  return 0;
}