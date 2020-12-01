#include <stdio.h>
#include <stdlib.h>

void display(char a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%c",a[i][j]);
            if (j<2)printf(" |");
        }
        printf("\n");
        if(i<2){printf("--------");}
     }
}

void enter_position1(char a[3][3], int x)
{
if (x == 1) a[0][0]='X';
else if (x == 2) a[0][1]='X';
else if (x == 3) a[0][2]='X';
else if (x == 4) a[1][0]='X';
else if (x == 5) a[1][1]='X';
else if (x == 6) a[1][2]='X';
else if (x == 7) a[2][0]='X';
else if (x == 8) a[2][1]='X';
else if (x == 9) a[2][2]='X';
}


void enter_position2(char a[3][3], int x)
{
if (x == 1) a[0][0]='O';
else if (x == 2) a[0][1]='O';
else if (x == 3) a[0][2]='O';
else if (x == 4) a[1][0]='O';
else if (x == 5) a[1][1]='O';
else if (x == 6) a[1][2]='O';
else if (x == 7) a[2][0]='O';
else if (x == 8) a[2][1]='O';
else if (x == 9) a[2][2]='O';
}



int checkwinner(char a[3][3])
{
if ((((a[0][0])==(a[0][1])) && ((a[0][1])== (a[0][2]))) ||  (((a[0][0])==(a[1][0]))&& ((a[1][0])==(a[2][0]))) || (((a[0][0])==(a[1][1]))&& ((a[1][1])==(a[2][2]))))
return 1;
else if ((((a[0][2])==(a[0][1])) && ((a[0][1])== (a[0][0]))) ||  (((a[0][2])==(a[1][2]))&& ((a[1][2])==(a[2][2]))) || (((a[0][2])==(a[1][1]))&& ((a[1][1])==(a[2][0]))))
return 1;
else if ((((a[2][0])==(a[2][1])) && ((a[2][1])== (a[2][2]))) ||  (((a[2][0])==(a[1][0]))&& ((a[1][0])==(a[0][0]))) || (((a[2][0])==(a[1][1]))&& ((a[1][1])==(a[0][2]))))
return 1;
else if ((((a[2][2])==(a[1][2])) && ((a[1][2])== (a[0][2]))) ||  (((a[2][2])==(a[2][1]))&& ((a[2][1])==(a[2][0]))) || (((a[2][2])==(a[1][1]))&& ((a[1][1])==(a[0][0]))))
return 1;
else if ((((a[0][1])==(a[0][0]))&&((a[0][0])==(a[0][2]))) || (((a[0][1])==(a[1][1]))&&((a[1][1])==(a[2][1]))))
        return 1;
else if ((((a[1][0])==(a[0][0]))&&((a[0][0])==(a[2][0]))) || (((a[1][0])==(a[1][1]))&&((a[1][1])==(a[2][1]))))
        return 1;
else if ((((a[1][2])==(a[0][2]))&&((a[0][2])==(a[2][2]))) || (((a[1][2])==(a[1][1]))&&((a[1][1])==(a[1][0]))))
        return 1;
else if ((((a[2][1])==(a[2][2]))&&((a[2][2])==(a[2][0]))) || (((a[2][1])==(a[1][1]))&&((a[1][1])==(a[0][1]))))
        return 1;
else if ((((a[1][1])==(a[0][1]))&&((a[0][1])==(a[2][1]))) || (((a[1][1])==(a[1][0]))&&((a[1][0])==(a[1][2]))) || (((a[1][1])==(a[0][0]))&&((a[0][0])==(a[2][2]))) || (((a[1][1])==(a[0][2]))&&((a[0][2])==(a[2][0]))))
            return 1;
        else return 0;
}

int main()
{
    int i,j,b;
   char a[3][3] ={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
   printf("\nFirst Player is X \t and \t Second Player is O!\n\n");
   printf("Select The Numbers Between 1 to 9 To Set\n");
display(a);
   for(b=0;b<9;b++)
   {
   printf("\nFirst Player Enter The Position !");
   scanf("%d",&i);
   enter_position1(a,i);
 display(a);
 if(checkwinner(a))
 { printf("\n\nHURRAYY......!!!!!!!!!!!!\n");
     printf("\nFirst Player Wins !!\n");
 break;}
printf("\nSecond Player Enter The Position !");
 scanf("%d",&j);
 enter_position2(a,j);
 display(a);
 if(checkwinner(a))
 { printf("\n\nHURRAYY......!!!!!!!!!!!!\n");
     printf("\n\nSecond Player Wins !!\n");
 break;}
   }

}
