#include<bits/stdc++.h> 
using namespace std; 
  
// Prints edges of tree 
// represented by give Prufer code 

  
// generate random numbers in between l an r 
int ran(int l, int r) 
{ 
    return l + (rand() % (r - l + 1)); 
} 
  
// Function to Generate Random Tree 
void generateRandomTree(int n) 
{ 
  
    int length = n - 2; 
    int arr[length]; 
  
    // Loop to Generate Random Array 
    for (int i = 0; i < length; i++)  
    { 
        arr[i] = rand()%n + 1; 
    } 
    printTreeEdges(arr, length); 
} 
int main() 
{   
    freopen("prufer.txt", "r", stdin); 
    freopen("prufer.out", "w", stdout); 
    srand(time(0)); 
    int n = 5; 
    generateRandomTree(n); 
  
    return 0; 
} 