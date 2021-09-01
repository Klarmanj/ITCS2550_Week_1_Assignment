class rectangleType {
protected:
    double length;
    double width;
public:
    void setDimension(double, double);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;
    rectangleType(){
            length = 8.3;
            width = 2.9;
    }
    rectangleType(double l, double w){
        length = l;
        width = w;
    }
};
