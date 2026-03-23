/*
NAME: VERN ANDRE A .MANAYAN
PURPOSE: TO CREATE A C PROGRAMMING THAT ASK THE ARRAY SIZE, AND ELEMENTS TO BE STORED AND REVERSE WITH A FUNCTION.
CREATED ON: 11/28/2025 (2:10 PM)
FINISHED ON: 11/28/2025(3: 11PM)
*/
#include<stdio.h>
void reverse(int array[], int arraySize);

main(){

	int arraySize;
	int i;
do{
	printf("Enter the length of the array: ");
 	scanf("%d",&arraySize);
}while(arraySize<=0);

	int array[arraySize];

	printf("\nEnter the element of the array: ");
	for (i=0;i<arraySize;i++){
		scanf("%d",&array[i]);
	}

	printf("\ninput array is: ");
	
	for (i=0;i<arraySize;i++){
		printf("%d ",array[i]);
	}
	
	reverse(array, arraySize);
	printf("\nReverse of the input array is: ");
	for (i=0;i<arraySize;i++){
		printf("%d ",array[i]);
	}
}

void reverse(int array[],int arraySize){
	int storage;
	int loop=arraySize-1;
	int i;
		for (i=0; i<arraySize/2 ;i++){
			storage=array[i];
			array[i]=array[loop-i];
			array[loop-i]=storage;
		}
}