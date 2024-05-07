#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class square {
        private:
            double sideLength;

        public:
            double getSideLength();
            void setSideLength(double side);
            square();
            square(double side);
            ~square();
    };
}
#endif