#include <cmath>


class Position {
    public:
        double x;
        double y;
        Position(int x, int y): x(x), y(y) {}

        double get_dist(Position other) {
            return hypot(x - other.x, y - other.y);
        }
};


class Person {
    public:
        Person(): position(0, 0) {}
        Position get_position() {
            return position;
        }

    private:
        Position position;
};
