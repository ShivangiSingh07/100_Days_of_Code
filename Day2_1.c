/* Q3 (User Inputs, Operations & Output) 📥
🧮 Write a program to calculate the area 🟦 and perimeter 📏 of a rectangle 
given its length and breadth.

🧪 Sample Test Cases
Input 1:
5 10

Output 1:
Area=50, Perimeter=30

Input 2:
3 7

Output 2:
Area=21, Perimeter=20
*/

#include<stdio.h>
int main() {
int length;int c;
int breadth,perimeter;
printf("Enter length and breath of rectangle");
scanf("%d %d",&length,&breadth);
int area = length*breadth;
c=length+breadth;
 perimeter = 2*c;
printf("Area=%d \n Perimeter=%d ",area,perimeter);

return 0;
}
