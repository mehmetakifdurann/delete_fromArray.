// This is a 'C' program to delete an element from an array at specified position
//Created by Mehmet Akif Duran, 12 January 2024

/*
 Example :
 Enter size of the array : 5
 Enter elements in array : 10 20 30 40 50
 Enter the element position to delete : 2
------------------------------------------------------------------
 Elements of array after delete are : 10   30   40    50
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 12000

int main(void){
        
    //variable decleration(s)
    
    int size,position,count;
    int array[MAX_SIZE];
    
    //executable statement(s)
    
    printf("Enter the size of array:\n "); //getting the array size of the user
        scanf("%d",&size);
    
    printf("Enter the elements of the array: \n"); //getting elements from the user
    for(count=0; count<size ; count++)
        scanf("%d", &array[count]);
    
    printf("Enter the element position to delete : \n"); //getting element position to delete. 
        scanf("%d", &position);
    
    
    if(position>size || position<0)
    {
        printf("You have entered an invalid value of position. Start the program again!\n"); //Error case.
    }
    else{ //copiying operation.
        for(count=position-1; count<size-1 ;count++)
        {
            array[count] = array[count+1];
        }
        size--; //decrement array size by 1
    }
    
    //printing the new array.
    printf("Your new array : \n");
    for(count=0; count<size; count++)
        printf("%d ", array[count]);
    
    printf("\n");
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
   
    
    return 0;
}
