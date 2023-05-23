#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(){

    int* ptr;
    int n = 5;

    printf("Enter number of Elements: %d\n", n);
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated \n");
        exit(0);
    }
    
    printf("Successfully allocated the memory using calloc(). \n");

    free(ptr);

    printf("Calloc Memory Successfully freed.");

    _getch();
    return 0;
}