#include <cstdlib>
#include <iostream>
#include "sortUtils.h"

/* Global constants */
const int NUM_ENTRIES = 15;


/**********************************************************/
/* add any additional functions you might need here - MJG */
/**********************************************************/

/**
 * This function will sort the list using 
 * the shell sort algorithm.
 * @param list - the list to search
 */
void shellSort(List<int> &list){
	//YOUR CODE GOES HERE
}

/**
 * This function will sort the list using 
 * the merge sort algorithm.
 * @param list - the list to search
 */
void mergeSort(List<int> &list){
	//YOUR CODE GOES HERE
}

/**
 * This function will sort the list using 
 * the quick sort algorithm.
 * @param list - the list to search
 */
void quickSort(List<int> &list){
	//YOUR CODE GOES HERE
}

/**
 * Insert NUM_ENTRIES ints into list, making sure they
 * entries are in random-esque order.
 * @param list - The list to populate with a random list
 */
void loadRandomList(List<int> &list){
	srand(time(NULL));
	for(int i = 0; i < NUM_ENTRIES; i++){
		list.insert(i, rand() % 50);
	}
}
