//AREA OF TRIANGLE
#include <stdio.h>
struct triangle{
    float b,h,a;
};
typedef struct triangle tri;
tri input(){
    tri t;
    printf("Enter base: ");
    scanf("%f",&t.b);
    printf("Enter height: ");
    scanf("%f",&t.h);
    return t;
}
tri area(tri t){
    t.a = 0.5*t.b*t.h;
    return t;
}
void display(tri t){
    printf("Triangle with %.2f base and %.2f height(altitude) has area = %.2f",t.b,t.h,t.a);
}
int main(){
    tri t;
    t = input();
    t = area(t);    
    display(t);
    return 0;
}
//AREA OF CIRCLE
#include<stdio.h>
#define p 3.14
struct circle{
    float r,a;
};
typedef struct circle cir;
cir input(){
    cir c;
    printf("Enter radius: ");
    scanf("%f",&c.r);
    return c;
}
cir area(cir c){
    c.a = p * c.r * c.r;
    return c;
}
void display(cir c){
    printf("Circle with radius %.2f has area %.2f",c.r,c.a);
}
int main(){
    cir c;
    c = input();
    c = area(c);
    display(c);
    return 0;
}


