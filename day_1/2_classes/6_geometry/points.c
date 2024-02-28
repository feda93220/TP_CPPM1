#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
// gcc points.c -lm pour linker math

struct point {
    double x;
    double y;
    bool visited;
};

struct point get_point(double x, double y) {
    struct point new;

    new.x = x;
    new.y = y;
    new.visited = false;
    return new;
}

double get_dist(struct point a, struct point b) {
    double diff_x = abs(a.x - b.x);
    double diff_y = abs(a.y - b.y);

    double square_x = diff_x * diff_x;
    double square_y = diff_y * diff_y;
    return sqrt(square_x + square_y);
}

void set_visited(struct point *point) {
    point->visited = true;
}


int main() {
    struct point a = get_point(1, 2);
    struct point b = get_point(3, 2);
    struct point c = get_point(2, 3);

    double dist_a_b = get_dist(a, b);
    double dist_b_c = get_dist(b, c);
    double dist_c_a = get_dist(c, a);

    printf("Distance de A à B : %f.\n", dist_a_b);
    printf("Distance de B à C : %f.\n", dist_b_c);
    printf("Distance de C à A : %f.\n", dist_c_a);

    printf("Avant visite de A : %s.\n", a.visited ? "true" : "false");
    set_visited(&a);
    printf("Après visite de A : %s.\n", a.visited ? "true" : "false");
}
