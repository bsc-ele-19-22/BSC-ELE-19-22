#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
        private:
           double radius;

        public:
           void setRadius(double r);
           double getRadius();
           Circle();
           Circle(double r);
           ~Circle();
    };
}
#endif 