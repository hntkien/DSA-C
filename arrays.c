#include <stdio.h>
#include <stdlib.h>

/* -----------Function Declarations----------- */
void insertion(int LA[], int N);
void deletion(int LA[], int N, int K);
void arraySearch(int LA[], int N, int item);
void arrayUpdate(int LA[], int N, int loc, int item);

/* -----------Main Function----------- */
int main() {
    
    int LA[6] = {1, 2, 3, 5, 6, 7};
    int N = sizeof(LA)/sizeof(LA[0]);

    /* Insertion Operation */
    printf("----------Insertion Operation----------\n");
    insertion(LA, N);

    /* Delete the first element of the array*/
    printf("----------Deletion Operation----------\n");
    int K = 0;
    deletion(LA, N, K);

    /* Search for an element item in an array */
    printf("----------Search Operation----------\n");
    int newLA[6] = {1, 2, 3, 5, 6, 7};
    int item = 2; 
    arraySearch(newLA, N, item);

    /* Update the kth element of newLA to item */
    printf("----------Update Operation----------\n");
    int kth = 4; 
    arrayUpdate(newLA, N, kth, item);


    
    return 0;
}

/* -----------Function Defnitions----------- */

/* 
Insertion Operation. This function accepts two input arguments
    LA[] - A linear array 
    N    - The length of the array
*/
void insertion(int LA[], int N){

    printf("Array BEFORE Insertion:\n");

    for (int i=0; i<N; i++){
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    printf("Inserting Elements..\n");
    printf("The array elements AFTER insertion:\n");

    for (int i=0; i<N; i++){
        LA[i] = i + 2;
        printf("LA[%d] = %d \n", i, LA[i]); 
    }
}

/*
Deletion Operation. This function accepts three input arguments:
    LA[] - A linear array 
    N    - The length of the array
    K    - The Kth element needed to be deleted
*/
void deletion(int LA[], int N, int K){

    int n = N;  // Create another n variable to store the array length
    int J;
    printf("The original array elements are:\n");
    // printf("%d\n", N);

    for (J=0; J<N; J++){
        printf("LA[%d] = %d\n", J, LA[J]);
    }
    
    // Delete the Kth element
    for (J=K; J<n; J++){
        LA[J] = LA[J+1];
        n = n - 1;
    }

    printf("The array elements after deletion:\n");

    for (J=0; J<N-1; J++){
        printf("LA[%d] = %d\n",J, LA[J]);
    }
}

/*
Search Operation. This function receives three input arguments;
    LA   - An linear array 
    N    - Length of the array 
    item - The value needs searching
*/
void arraySearch(int LA[], int N, int item){
    printf("The original array elements are:\n");
    for (int i=0; i<N; i++){
        printf("LA[%d] = %d\n", i, LA[i]);
    }
    /* Search for item in the array */
    for (int i = 0; i<N; i++){
        if (LA[i] == item){
            printf("Found element %d at position %d.\n", item, i+1);
        }
    }
}

/*
Update Operation. This function accpets four input arguments:
    LA   - A linear array 
    N    - Length of the array 
    loc  - Location (kth index) to be updated
    item - The desired update value at loc 
*/
void arrayUpdate(int LA[], int N, int loc, int item){
    printf("The original array elements are:\n");

    for (int i=0; i<N; i++){
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    /* Update the kth element */
    LA[loc-1] = item;
    printf("The array elements after updation:\n");

    for (int i=0; i<N; i++){
        printf("LA[%d] = %d\n", i, LA[i]);
    }
}