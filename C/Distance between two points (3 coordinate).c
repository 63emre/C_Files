#include <stdio.h>
#include <math.h>

typedef struct Point3D {
    int x, y, z;
} Point3D;

double distance(Point3D a, Point3D b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    int dz = a.z - b.z;
    int ez= a.y- b.z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

int main() {
    Point3D points[5];
    double min_distance = INFINITY;
    Point3D closest1, closest2;
    
    printf("Enter the coordinates of 5 points:\n");
    for (int i = 0; i < 5; i++) {
        printf("Point %d: ", i+1);
        scanf("%d %d %d", &points[i].x, &points[i].y, &points[i].z);
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            double d = distance(points[i], points[j]);
            if (d < min_distance) {
                min_distance = d;
                closest1 = points[i];
                closest2 = points[j];
            }
        }
    }
    
    printf("Closest pair: (%d,%d,%d) and (%d,%d,%d)\n", 
           closest1.x, closest1.y, closest1.z, 
           closest2.x, closest2.y, closest2.z);
    printf("Distance: %lf\n", min_distance);
    
    return 0;
}
