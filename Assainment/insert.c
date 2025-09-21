#include <stdio.h> 
 
int main() { 
   int arr[100]; 
   int n, i, pos, num; 
 
   printf("Enter how many numbers: "); 
   scanf("%d", &n); 
 
   printf("Enter the numbers:\n"); 
   for(i = 0; i < n; i++) { 
       scanf("%d", &arr[i]); 
   } 
 
   printf("Enter position to insert at (0 to %d): ", n); 
   scanf("%d", &pos); 
 
   printf("Enter the number to insert: "); 
   scanf("%d", &num); 
 
   // move all numbers one step right from the end to pos 
   for(i = n; i > pos; i--) { 
       arr[i] = arr[i-1]; 
   } 
 
   arr[pos] = num; // put the new number 
   n++; // increase array size 
 
   printf("New array:\n"); 
   for(i = 0; i < n; i++) { 
       printf("%d ", arr[i]); 
   } 
 
   return 0; 
} 
