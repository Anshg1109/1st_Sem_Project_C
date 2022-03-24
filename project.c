#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp=fopen("ticket.txt","a");
int i,b,j,pass;
char c[20];
char g[20];
char s[20];
char q[20]="First class";
printf("\n");
printf("Verifictation code for Robot or Not(3489)  :");
scanf("%d",&pass);
switch(pass)
{
    case(3489):  
            printf("\nVerification Successful\n");     
            printf("\n\n\t** Welcome to Maharaja Airlines** \n\n\n");
            printf("Your Good Name :");
            scanf("%s",g);
            printf("\nYour Gmail id :");
            scanf("%s",c);
            printf("\nYour gender :");
            scanf("%s",s);

{

printf(" \nWelcome to ticket booking system\n\n");
printf("Destination :- From - Dehli To - Chandigarh\n\n");
printf("\nPress 1 for First class\nCost : 7000 Rs\n");
printf("press 2 for Economy class\nCost : 3000 Rs\n");
printf("press any other key for exit this window\n");
scanf("%d",&i);

switch(i)
{
  case 1:
   q=="Firstclass";
	printf("\n\nFirst Class\n");
	printf("Available seat no's are: 1,2,3,4,5,6,7,8,9,10.\n");
       {
        printf("Pick a seat:");
        scanf("%d",&b);
        if(b <= 10)
                {
                    printf("\n");
                    printf("\n*************************\n\n");
                    printf("Class:- First class\n");
                    printf("Seat no:- %d\n",b);
                    printf("Total Amount : 7000\n");
                    printf("\n\n*************************\n\n");
                    printf("\n\nYour transaction has been done \n\nThanks for visiting");
                }
                else
               {    printf("\nWrong input,pls select an available seat\n\n");     }
       }
     break;
    case 2:
     q=="Economy class";
    printf("\n\nEconomy class\n");
	printf("Available seat no's are: 11,12,13,14,15,16,17,18,19,20.\n");
   {
        printf("Pick a seat:");
        scanf("%d",&b);
        if(b >= 10)
                {
                    printf("\n");
                    printf("\n****************************\n\n");
                    printf("Class:- Economy class\n");
                    printf("Seat no:- %d\n",b);
                    printf("Total Amount : 3000\n");
                    printf("\n\n*****************************\n\n");
                    printf("\n\nYour transaction has been done \n\nThanks for visiting");
                }
                else
               {    printf("\nWrong input,pls select an available seat\n\n");     }
       }
       break;
       default:
       printf("\nThanks for visiting\n\n");
}
}
break;
default:
printf("\n\nSorry wrong input\n");
printf("\nVerification Failed");

}

fprintf(fp,"\n\t\t\t\tYour Name :%s\t\t\tYour gender :%s\n\n\t\t\t\tFrom - Dehli  To - Chandigarh\n\n\t\t\t\tYour g-mail id :%s\t\tClass :%s"
,g,s,c,q);

fprintf(fp,"\n\n\t\t\t\tYour Seat no.:%d\n\n",b);

fprintf(fp,"\t\t\t\tDate- 10 JAN \t\t\tDeparts- 14:15\n\n\t\t\t\t\tHave a great trip");

fclose(fp) ; 

return 0;
}