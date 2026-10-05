#include<stdio.h>
#include<math.h>

struct point{
    float x,y;};
    
typedef struct point Point;

float distance(Point p1 , Point p2);
void output(Point p1,Point p2,float d);


Point input(){
    float d;
    Point p;
    printf("Enter the coordinates of x and y: ");
    scanf("%f%f",&p.x,&p.y);
    return p;
    
}
float distance(Point p1,Point p2){
    return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));

    
}
void output(Point p1,Point p2,float d){
    printf("The distance between (%.2f,%.2f) and (%.2f,%.2f) is (%.2f)",p1.x,p1.y,p2.x,p2.y,d);
    
}
int main(){
    float d;
    Point p1,p2;
    p1=input();
    p2=input();
    d=distance(p1,p2);
    output(p1,p2,d);
    return 0;
    
    
}
