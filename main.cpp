#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<cstring>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
#include"network.h"
#include"guess.h"
using namespace std;

int main()
{   int i,ln,j=0,n;
    char str[100],rev[100];
    int cchoice,addf,adds,addt,subf,subs,subt,modf,mods,modt,mulf,muls,mult,divf,divs,divt;
    char op,month_name[20];
    int month_code;
    int ctw, last_two_digit,year_c,year_code,centuary_code,date_no;
    int choice, ii, a, b;
    float x, y, result;
	start:
		
   system("COLOR F1");
   do {
   	cout<<"\n_________________________________________________________________________________\n";
   	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"|\t1.Scientific Calculator\t\t\t2.Birthday Checker\t\t|\n";
    cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";													// Ki Akam ta je tu korsili aikhane...
    cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"|\t3.Palindrome Test\t\t\t4.Network Utility\t\t|\n";
    cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"|\t5.Guessing Game\t\t\t\t6.Exit\t\t\t\t|\n";
    cout<<"|_______________________________________________________________________________|\n";
  

   printf("\nENTER YOUR CHOICE:");
   scanf("%d",&cchoice);
   switch(cchoice)
   {

    case 1:
    do {
    printf("\nSelect your operation (0 to exit):\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
    printf("9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n");
    printf("12. 10 ^ X\n13. X!\n14.(x * y) / 100 \n15. log10(x)\n16. Modulus\n");
    printf("17. Sin(X)\n18. Cos(X)\n19. Tan(X)\n20. Cosec(X)\n");
    printf("21. Cot(X)\n22. Sec(X)\n");
    printf("Choice: ");
    scanf("%d", &choice);
    //if(choice == 0)
    switch(choice) {
    case 1:
    printf("Enter X: ");
    scanf("%f", &x);
    printf("\nEnter Y: ");
    scanf("%f", &y);
    result = x + y;
    printf("\nResult: %f", result);
    break;
    case 2:
    printf("Enter X: ");
    scanf("%f", &x);
    printf("\nEnter Y: ");
    scanf("%f", &y);
    result = x - y ;
    printf("\nResult: %f", result);
    break;
    case 3:
    printf("Enter X: ");
    scanf("%f", &x);
    printf("\nEnter Y: ");
    scanf("%f", &y);
    result = x * y;
    printf("\nResult: %f", result);
    break;
    case 4:
    printf("Enter X: ");
    scanf("%f", &x);
    printf("\nEnter Y: ");
    scanf("%f", &y);
    result = x / y;
    printf("\nResult: %f", result);
    break;
    case 5:
    printf("Enter X: ");
    scanf("%f", &x);
    result = sqrt(x);
    printf("\nResult: %f", result);
    break;
    case 6:
    printf("Enter X: ");
    scanf("%f", &x);
    printf("\nEnter Y: ");
    scanf("%f", &y);
    result = pow(x, y);
    printf("\nResult: %f", result);
    break;
    case 7:
    printf("Enter X: ");
    scanf("%f", &x);
    result = pow(x, 2);
    printf("\nResult: %f", result);
    break;
    case 8:
    printf("Enter X: ");
    scanf("%f", &x);
    result = pow(x, 3);
    printf("\nResult: %f", result);
    break;
    case 9:
    printf("Enter X: ");
    scanf("%f", &x);
    result = pow(x, -1);
    printf("\nResult: %f", result);
    break;
    case 10:
    printf("Enter X: ");
    scanf("%f", &x);
    printf("\nEnter Y: ");
    scanf("%f", &y);
    result = pow(x, (1/y));
    printf("\nResult: %f", result);
    break;
    case 11:
    printf("Enter X: ");
    scanf("%f", &x);
    y = 3;
    result = pow(x, (1/y));
    printf("\nResult: %f", result);
    break;
    case 12:
    printf("Enter X: ");
    scanf("%f", &x);
    result = pow(10, x);
    printf("\nResult: %f", result);
    break;
    case 13:
    printf("Enter X: ");
    scanf("%f", &x);
    result = 1;
    for(i = 1; i <= x; i++) {
    result = result * i;
    }
    printf("\nResult: %.f", result);
    break;
    case 14:
    printf("Enter X: ");
    scanf("%f", &x);
    printf("\nEnter Y: ");
    scanf("%f", &y);
    result = (x * y) / 100;
    printf("\nResult: %.2f", result);
    break;
    case 15:
    printf("Enter X: ");
    scanf("%f", &x);
    result = log10(x);
    printf("\nResult: %.2f", result);
    break;
    case 16:
    printf("Enter X: ");
    scanf("%d", &a);
    printf("\nEnter Y: ");
    scanf("%d", &b);
    result =(a%b);
    printf("\nResult: %d", result);
    break;
    case 17:
    printf("Enter X: ");
    scanf("%f", &x);
    result = sin(x * 3.14159 / 180);
    printf("\nResult: %.2f", result);
    break;
    case 18:
    printf("Enter X: ");
    scanf("%f", &x);
    result = cos(x * 3.14159 / 180);
    printf("\nResult: %.2f", result);
    break;
    case 19:
    printf("Enter X: ");
    scanf("%f", &x);
    if(x==90){
    	cout<<"You should learn mathematics first.\nTangent 90 Dregree is always Infinity.";
	}
	else{
    result = tan(x * 3.14159 / 180);
    printf("\nResult: %.2f", result);
		}
	break;
    case 20:
    printf("Enter X: ");
    scanf("%f", &x);
    result = 1 / (sin(x * 3.14159 / 180));
    printf("\nResult: %.2f", result);
    break;
    case 21:
    printf("Enter X: ");
    scanf("%f", &x);
    if(x==0){
    	cout<<"You should learn mathematics first.\nCotangent 0 Dregree is always Infinity.";
	}
	else{
    result = 1 / tan(x * 3.14159 / 180);
    printf("\nResult: %.2f", result);
		}
	break;
    case 22:
    printf("Enter X: ");
    scanf("%f", &x);
    result = 1 / cos(x * 3.14159 / 180);
    printf("\nResult: %.2f", result);
    break;
    default:
    	cout<<"Invalid Choice";
    goto start;
				}
    }
     while(choice==0);
    getch();
	goto start;
   case 2:
      printf("ENTER THE MONTH'S NO. The DATE_NO. &  THE YEAR\n");
    scanf("%s %d %2d",month_name,&date_no,&last_two_digit);

     if(last_two_digit==15)
        centuary_code=0;
     else if(last_two_digit==16)
        centuary_code=6;
       else if(last_two_digit==17)
        centuary_code=4;
      else if(last_two_digit==18)
        centuary_code=2;
      else if(last_two_digit==19)
        centuary_code=0;
       else if(last_two_digit==20)
        centuary_code=6;
    scanf("%d",&last_two_digit);
   if(strcmp(month_name,"january")==0)
      {
   month_code=1;
      }
    else if(strcmp(month_name,"february")==0)
      {
   month_code=4;
    }
         else if(strcmp(month_name,"march")==0)
      {
   month_code=4;
    }
         else if(strcmp(month_name,"april")==0)
      {
   month_code=0;
      }
         else if(strcmp(month_name,"may")==0)
      {
   month_code=2;
      }
         else if(strcmp(month_name,"june")==0)
      {
   month_code=5;
     }
         else if(strcmp(month_name,"july")==0)
      {
   month_code=0;
      }
         else if(strcmp(month_name,"aguest")==0)
      {
   month_code=3;
      }
         else if(strcmp(month_name,"september")==0)
      {
   month_code=6;
      }
         else if(strcmp(month_name,"october")==0)
      {
   month_code=1;
      }
         else if(strcmp(month_name,"november")==0)
      {
   month_code=4;
      }
         else if(strcmp(month_name,"december")==0)
      {
   month_code=6;
      }


     year_c=(last_two_digit+centuary_code)%7;
    year_code=(year_c+(last_two_digit)/4)%7;
     ctw=(year_code+month_code+date_no)%7;

    if(ctw==0){
        printf("the day is Saturday"); goto start;}
    else if(ctw==1){
        printf("the day is Sunday");  goto start;}
    else if(ctw==2){
        printf("the day is Monday");  goto start;}
    else if(ctw==3){
        printf("the day is Tuesday");  goto start;}
    else if(ctw==4) {
        printf("the day is Wednesday");  goto start;}
    else if(ctw==5){
        printf("the day is Thursday");  goto start;}
    else if(ctw==6){
        printf("the day is Friday");  goto start;}
    break;
   case 3:
    printf("Enter the word that you want to test:");
    scanf("%s",str);
    ln=strlen(str);
    for(ii=ln-1;ii>=0;ii--)
    {
        rev[j]=str[ii];
        j++;
    }
    rev[j]='\0';
    if(strcmp(str,rev)==0){
        printf("\n The word is palindrome \n"); getch(); goto start;
    }
    else
    printf("\n The word you enter is not palindrome \n"); getch(); goto start;
    break;
   case 4:
    network();
    goto start;
	break;
	case 5:
		game_start();
		goto start;
		break;
	case 6:
   printf("\n\t\t\tThanks For Using Student's Swiss-Army Knife!!!!!");
	getch();
    default:
    if(n>5){
    	cout<<"Invalid Choice";
	}
   }
   } while(choice==5);

}

