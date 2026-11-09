#include<stdio.h>
#include<stdlib.h>
int Choice();
void choice(int c);

int main(){
    int c;
    while(1){
    c = Choice();
    choice(c);}
    return 0;
    
}
    
int Choice(){
    int c;
    printf("Enter Choice: ");
    scanf("%d",&c);
    return c;
    
}
void choice(int c){
switch(c)
{
    case 1:
    printf("my choice is 1\n");
    break;
    case 2:
    printf("my choice is 2\n");
    break;
    case 3:
    printf("my choice is 3\n");
    break;
    case 4:
    printf("Exit\n");
    exit(0);
    break;
    default:
    printf("INVALID CHOICE\n");
    break;
    
    
}}
