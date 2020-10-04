//1080A - Petya and Origami 
//Contributed by Mohd Warid (waridrox)
/*
PROBLEM STATEMENT 
Petya is having a party soon, and he has decided to invite his n friends.

He wants to make invitations in the form of origami. For each invitation, he needs two red sheets, five green sheets, and eight blue sheets. The store sells an infinite number of notebooks of each color, but each notebook consists of only one color with k sheets. That is, each notebook contains k sheets of either red, green, or blue.

Find the minimum number of notebooks that Petya needs to buy to invite all n of his friends.


Input
The first line contains two integers n and k (1≤n,k≤108) — the number of Petya's friends and the number of sheets in each notebook respectively.

Output
Print one number — the minimum number of notebooks that Petya needs to buy.
*/
#include <bits/stdc++.h> 
using namespace std;

int main() {
 
//plane with number i likes the plane with number fi
 
      int n; cin >> n; 
      int k; cin >> k;
      //2 red 5 green 8 blue * 3 => 6r 15g 24b
      //5 sheets per notebook
      //24/5 = 4.8 -> 5
      //15/5 = 3
      //6/5 = 1.2 -> 2
      
      //each notebook consists of only one color of k sheets
      // float red = 2*n;
      // float green = 5*n;
      // float blue = 8*n;
      cout << (2*n+k-1)/k + (5*n+k-1)/k + (8*n+k-1)/k;
      return 0;
}
