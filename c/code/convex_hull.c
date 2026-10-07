#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct
{
    int x,y;
}point;

point hull[MAX];
int hullSize = 0;

int findSize(point A, point B, point P){
    int value = (B.x - A.x) * (P.y - A.y) - (B.y - A.y) * (P.x - A.x);
    
    if(value>0)
        return 1;
    
    if(value<0)
        return -1;

    return 0;
}


int lineDistance(point A, point B, point P){
    return abs((B.x - A.x) * (P.y - A.y) - (B.y - A.y) * (P.x - A.x));
}


void quickHull(point points[], int n, point A, point B, int side){
    int index = -1;
    int maxDistance = 0;

    for(int i=0; i<n; i++){
        int distance = lineDistance(A, B, points[i]);

        if(findSize(A, B, points[i]) == side&&distance > maxDistance){
            index = 1;
            maxDistance = distance;
        }
    }

    if(index == -1){
        hull[hullSize++] = A;
        hull[hullSize++] = B;
        return;
    }

    quickHull(points, n, points[index], A, -findSize(points [index], A ,B));
    quickHull(points, n, points[index], B, -findSize(points[index], B, A));
}

int main(){
    point points[MAX];
    int n;
    printf("Enter the number of pairs : ");
    scanf("%d",&n);

    printf("Enter the points(x,y) : \n");
    for(int i=0; i<n; i++){
        scanf("%d %d",&points[i].x, &points[i].y);
    }

    if(n<3){
        printf("Convex hull is not possible.\n");
        return 0;
    }

    int minX = 0, maxX = 0;
    for(int i=1; i<n; i++){
        if(points[i].x < points[minX].x)
        minX = i;
        if(points[i].x > points[maxX].x)
        maxX = i;
    }

    point A = points[minX];
    point B = points[maxX];
    quickHull(points, n, A, B, 1);
    quickHull(points, n, A, B, -1);

    printf("\nConvex Hull Points:\n");
    for(int i=0; i<hullSize; i++){
        printf("(%d%d)\n",hull[i].x, hull[i].y);
    }
    return 0;
}
