#include<stdio.h>
void main()
{ 
   int a;
   printf("Enter Your Marks: ");
   scanf("%d",&a);
   if(a<40)
   {
   	printf("Your Grade Is F");
   }
   else if(a>=40 && a<=54)
   {
   	printf("Your Grade Is D");
   }
   else if(a>54 && a<=69)
   {
   	printf("Your Grade Is C");
   }
   else if(a>69 && a<=84)
   {
   	printf("Your Grade Is B");
   }
   else
   {
   	printf("Your Grade Is A");
   }
}
