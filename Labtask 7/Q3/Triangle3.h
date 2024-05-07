#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
       private:
          double base;
          double height;

       public:
         
          void setBase(double b);
          void setHeight(double h);
          double getBase();
          double getHeight();
          Triangle();
          Triangle(double b, double h);
          ~Triangle();
    };
}
#endif