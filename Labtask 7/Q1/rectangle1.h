#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {

private:
    float length;
    float width;

 public:
    float getLength(void);
    void setLength(float len);

    float getWidth(void);
    void setWidth(float wid);

    float areaOfRectangle(float X, float y);
    Rectangle(); // constructor
    ~Rectangle(); // distructor

};

#endif // RECTANGLE_H