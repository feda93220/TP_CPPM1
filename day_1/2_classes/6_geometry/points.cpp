#include <iostream>
#include <cmath>

using namespace std;

class Point {
    public:
        double x;
        double y;
        bool is_visited;
        Point(int x, int y): x(x), y(y) {
            is_visited = false;
        }

        double get_dist(Point other) {
            return hypot(x - other.x, y - other.y);
        }

        void set_visited() {
            is_visited = true;
        }
};


int main() {
    Point a(1, 1);
    Point b(2, 3);
    Point c(3, 2);

    double dist_a_b = a.get_dist(b);
    double dist_b_c = b.get_dist(c);
    double dist_c_a = c.get_dist(a);

    cout << "Distance de A à B : " << dist_a_b << endl;
    cout << "Distance de B à C : " << dist_b_c << endl;
    cout << "Distance de C à A : " << dist_c_a << endl;

    cout << "Avant visite de A : " << a.is_visited << endl;
    a.set_visited();
    cout << "Après visite de A : " << a.is_visited << endl;

    return 0;
}
