#include<stdio.h>
enum type
{
	 GPIO_Speed_2MHz,GPIO_Speed_10MHz,GPIO_Speed_50MHz
};
struct Speeds
{
    type GPIO_Speed;
 } ;
 void GPIO_StructureInit(struct Speeds*pointer)
 {
 	pointer->GPIO_Speed=GPIO_Speed_2MHz;
 }
 int main() 
 {
 	Speeds pointer;
 	GPIO_StructureInit(&pointer);
	 return 0;
 }
