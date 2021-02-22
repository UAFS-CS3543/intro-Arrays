#include <stdio.h>

#define SIZE 5

//*** Function Prototypes
void displayArray(int array[], int size);
void addToItems(int array[], int size, int value);

int main(){
   int numbers[SIZE]={100,200,300,400,500};
   int index;

   //Iterate through the Array, one item at a time
   displayArray(numbers, SIZE);

   addToItems(numbers,SIZE,50);

   //Iterate through the Array, one item at a time
   displayArray(numbers, SIZE);

   
   return 0;
}

void displayArray(int array[], int size){
/********************************************
 * Display an Integer Array                 *
 * *****************************************/
   int index;

   printf("\n==========================\n");
   printf("        ARRAY\n");
   printf("==========================\n");

   //Iterate through the Array, one item at a time
   for(index=0;index<size;index++){
      printf("array[%d]: %d\n",index,array[index]);
   }
}

void addToItems(int array[], int size, int value){
/*******************************************
 * Add the value to each item in the array *
 * *****************************************/
   int index;

   for(index=0;index<size;index++){
      array[index]= array[index] + value;
   }

}

