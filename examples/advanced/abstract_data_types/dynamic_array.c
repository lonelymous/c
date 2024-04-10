#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* array;         // Pointer to the array
    size_t size;        // Current size of the array
    size_t capacity;    // Capacity of the array
} DynamicArray;

/**
 * @brief Initializes a dynamic array with the given capacity.
 * 
 * @param dynamicArray Pointer to the dynamic array.
 * @param capacity The initial capacity of the array.
 */
void initDynamicArray(DynamicArray* dynamicArray, size_t capacity) {
    // Allocate memory for the array
    dynamicArray->array = (int*)malloc(capacity * sizeof(int));
    
    // Check if memory allocation was successful
    if (dynamicArray->array == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    // Initialize the size and capacity of the array
    dynamicArray->size = 0;
    dynamicArray->capacity = capacity;
}

/**
 * @brief Frees the memory allocated for the dynamic array.
 * 
 * @param dynamicArray Pointer to the dynamic array.
 */
void freeDynamicArray(DynamicArray* dynamicArray) {
    free(dynamicArray->array);
    dynamicArray->array = NULL;
    dynamicArray->size = 0;
    dynamicArray->capacity = 0;
}

/**
 * @brief Appends an element to the dynamic array.
 * 
 * @param dynamicArray Pointer to the dynamic array.
 * @param element The element to be added.
 */
void appendDynamicArray(DynamicArray *dynamicArray, int element) {
    // Check if the array is full
    if (dynamicArray->size == dynamicArray->capacity) {
        // If the array is full, double its capacity
        dynamicArray->capacity *= 2;
        // Reallocate memory for the array
        dynamicArray->array = (int *)realloc(dynamicArray->array, dynamicArray->capacity * sizeof(int));
        if (dynamicArray->array == NULL) {
            fprintf(stderr, "Memory reallocation error\n");
            exit(EXIT_FAILURE);
        }
    }

    // Append the element to the array
    dynamicArray->array[dynamicArray->size] = element;
    dynamicArray->size++;
}

/**
 * @brief Prints the elements of the dynamic array.
 * 
 * @param dynamicArray Pointer to the dynamic array.
 */
void printDynamicArray(DynamicArray* dynamicArray) {
    printf("Dynamic Array: ");
    for (size_t i = 0; i < dynamicArray->size; i++) {
        printf("%d ", dynamicArray->array[i]);
    }
    printf("\n");
}

int main() {
    DynamicArray myArray;
    initDynamicArray(&myArray, 5);

    // Append elements to the array
    for (int i = 0; i <= 100; i+=10) {
        appendDynamicArray(&myArray, i);
    }

    printDynamicArray(&myArray);

    // Free the memory
    freeDynamicArray(&myArray);

    return 0;
}
