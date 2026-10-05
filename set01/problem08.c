#include<stdio.h>

struct point{
    float x,y;
};

typedef struct point Point;

struct hexagon{
    int no_of_points;
    Point points[6];
};
typedef struct hexagon Hexagon;

Hexagon input(){
    int i;
    Hexagon h;
    h.no_of_points=6;
    for (i=0;i<6;i++){
        printf("Enter point: ");
        scanf("%f%f",&h.points[i].x,&h.points[i].y);}
    return h;    
}
void output(Hexagon h){
    int i;
    printf("The coordinates of hexagon are: ");
    for(i=0;i<6;i++){
        printf("\n(%.2f,%.2f)",h.points[i].x,h.points[i].y);
    }
    
}
int main(){
    Hexagon h;
    h=input();
    output(h);
    return 0;
}
