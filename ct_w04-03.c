#include <stdio.h>

int main(){ 
char nameInitial ='B';     //ใช้ char เพื่อเก็บอักษรตัวเเรกของชื่อ เพราะเป็นตัวอักษรเดียว // กำหนดให้เก็บตัวอักษรตัวเเรกของชื่อ
int age = 21;     //ใช้ int เพื่อเก็บอายุ เพราะเก็บค่าตัวเเปรเป็น เลขจำนวนเต็ม // กำหนดให้เก็บอายุ
float weight = 71.1;    //ใช้ float  เพื่อเก็บน้ำหนัก เพราะสามารถเก็บตัวเเปรเป็นทศนิยมได้ // กำหนดให้เก็บน้ำหนัก
char gender[] = " Male";   //ใช้ char array เพื่อเก็บเพศ เพราะใช้เก็บค่าตัวเเปรเป็นชนิด pointer // กำหนดให้เก็บเพศ

printf("nameInitial: %c\n", nameInitial);   // Pirnt the initial of the name
printf("Age: %d\n", age);   // Pirnt the age
printf("Weight: %.1f kg\n", weight );  // Pirnt the weight with one decimal pace
printf("Gender: %s\n", gender);  // Pirnt Male
return 0;
}