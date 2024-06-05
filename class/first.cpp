class Rectangle {
    public:
        double calculateArea();
        void setWidth(double w);
        void setHeight(double h);
        double getWidth();
        double getHeight();

    private:
        double width, height;
};

double Rectangle::calculateArea(){
    return width * height;
}

void Rectangle::setWidth(double w){
    width = w;
}


void Rectangle::setHeight(double w){
    width = w;
}

double Rectangle::getHeight(){
    height = h;
}

double Rectangle::getWidth(){
    width = w;
}



int main(){
    Rectangle r;
    r.calculateArea();
    return 0;
}