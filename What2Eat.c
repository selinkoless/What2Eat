#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){

#define MAX(a,b) ((a) > (b) ? (a) : (b))

char* const menu[] = { "Pizza", "Burger", "Cheescake", "Salad", "Chips","Doner","Lahmacun"};
int menuSize = 7;
int numOfchoices = 5;
int points[numOfchoices];
int threshold = 30;
int foodPoints = menuSize;

int pizza = 0;
int burger = 0;
int cheescake = 0;
int salad = 0;
int chips = 0;
int doner = 0;
int lahmacun = 0;

int numOfpeople;
printf("Please enter the number of people:");
scanf("%d",&numOfpeople);


srand(time(NULL));

for(int i=0; i<numOfpeople; i++){
    
    printf("\n%d: ",(i+1));

    for(int j=0; j<numOfchoices; j++){
        int random = rand()%menuSize;
        points[random]++;
        char* foodchoice = menu[random];
        printf("%s  ",foodchoice);

        if(strcmp(menu[random],"Pizza") == 0)
           pizza += foodPoints;
        
        else if(strcmp(menu[random],"Burger") == 0)
           burger += foodPoints;

        else if(strcmp(menu[random],"Cheescake") == 0)
           cheescake += foodPoints;
        
        else if(strcmp(menu[random],"Salad") == 0)
           salad += foodPoints;
        
        else if(strcmp(menu[random],"Chips") == 0)
           chips += foodPoints;

        else if(strcmp(menu[random],"Doner") == 0)
           doner += foodPoints;
        
        else if(strcmp(menu[random],"Lahmacun") == 0)
           lahmacun += foodPoints;

        foodPoints--;
        }
        
        foodPoints = menuSize;
   
    printf("\n");
}   

printf("\nScores for the first round!!!\n");
printf("\nPizza: %d\n",pizza);
printf("Burger: %d\n",burger);
printf("Cheescake: %d\n",cheescake);
printf("Salad: %d\n",salad);
printf("Chips: %d\n",chips);
printf("Doner: %d\n",doner);
printf("Lahmacun: %d\n",lahmacun);

int size = 0;

if(pizza >= threshold) 
   size++;

if(burger >= threshold)
   size++;

if(cheescake >= threshold)
   size++;

if(salad >= threshold)
   size++;
 
if(chips >= threshold)
  size++;

if(doner >= threshold)
  size++;

if(lahmacun >= threshold)
  size++;


if(size == 0)
   printf("You are eating at home/dorm today!");

if(size != 0){

printf("\nNew menu for the second round:\n");


char* menu2[256];
bool selected1 = false;
bool selected2 = false;
bool selected3 = false;
bool selected4 = false;
bool selected5 = false;
bool selected6 = false;
bool selected7 = false;


for (int i=0; i<size;){
    
    if(pizza >= threshold && selected1 == false){
       menu2[i] = "Pizza";
       selected1 = true;
    }

    else if(burger >= threshold && selected2 == false){
       menu2[i] = "Burger";
       selected2 = true;
    }

    else if(cheescake >= threshold && selected3 == false){
       menu2[i] = "Cheescake";
       selected3 = true;
    }

    else if(salad >= threshold && selected4 == false){
       menu2[i] = "Salad";
       selected4 = true;
    }

    else if (chips >= threshold && selected5 == false){
       menu2[i] = "Chips";
       selected5 = true;
    }
   
    else if (doner >= threshold && selected5 == false){
       menu2[i] = "Doner";
       selected5 = true;
    }
    
    else if(lahmacun >= threshold && selected5 == false){
        menu2[i] = "Lahmacun";
        selected5 = true;
    }

    i++;
}


for(int i=0; i<size; i++)
    printf("%s ",menu2[i]);

printf("\n");

pizza = 0;
burger = 0;
cheescake = 0;
salad = 0;
chips = 0;
doner = 0;
lahmacun = 0;

int foodPoints2 = size;

for(int i=0; i<numOfpeople; i++){
    
    printf("\n%d: ",(i+1));

    for(int j=0; j<size; j++){
        int random = rand()%size;
        points[random]++;
        char* foodchoice = menu2[random];
        printf("%s  ",foodchoice);

        if(strcmp(menu2[random],"Pizza") == 0)
           pizza += foodPoints2;
        
        else if(strcmp(menu2[random],"Burger") == 0)
           burger += foodPoints2;

        else if(strcmp(menu2[random],"Cheescake") == 0)
           cheescake += foodPoints2;
        
        else if(strcmp(menu2[random],"Salad") == 0)
           salad += foodPoints2;
        
        else if(strcmp(menu2[random],"Chips") == 0)
           chips += foodPoints2;

        else if(strcmp(menu2[random],"Doner") == 0)
           doner += foodPoints2;
        
        else if(strcmp(menu2[random],"Lahmacun") == 0)
           lahmacun += foodPoints2;

        foodPoints2--;
        }
        
        foodPoints2 = size;
   
    printf("\n");
}   

printf("\nScores for the second round!!!\n");
printf("\nPizza: %d\n",pizza);
printf("Burger: %d\n",burger);
printf("Cheescake: %d\n",cheescake);
printf("Salad: %d\n",salad);
printf("Chips: %d\n",chips);
printf("Doner: %d\n",doner);
printf("Lahmacun: %d\n",lahmacun);

int MAX1 = MAX(pizza,burger);  
int MAX2 = MAX(cheescake,salad); 
int MAX3 = MAX(chips,doner); 
int MAX4 = MAX(lahmacun,MAX1); 
int MAX5 = MAX(MAX2,MAX4);
int MAX6 = MAX(MAX5,MAX3);

printf("\nTop score is %d ",MAX6);

}

}   






