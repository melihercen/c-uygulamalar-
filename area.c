#include <stdio.h>
#include <stdlib.h>

//tanımlama ve alan hesaplama formulleri
//definition and area calculation formulas
struct Rectangle{
    float length;
    float width;
};

float Rectangle_area(struct Rectangle rectangle){
    return rectangle.length*rectangle.width;
}

struct Square{
    float edge;
};

float Square_area(struct Square square){
    return square.edge*square.edge;
}

struct Triangle{
    float base;
    float height;
};

float Triangle_area(struct Triangle triangle){
    return (triangle.base*triangle.height)/2;
}

struct Circle{
    float radius;
};

float Circle_area(struct Circle circle){
    return circle.radius*circle.radius*3.14;
}

int main()
{
    int choice;
    struct Rectangle rectangle1;
    struct Square square1;
    struct Triangle triangle1;
    struct Circle circle1;

    printf("Area Calculator\n");
    printf("1-Rectangle\n");
    printf("2-Square\n");
    printf("3-Triangle\n");
    printf("4-Circle\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Rectangle length: ");
            scanf("%f",&rectangle1.length);
            printf("Rectangle width: ");
            scanf("%f",&rectangle1.width);
            printf("Rectangle area: %f\n",Rectangle_area(rectangle1));
            break;
        case 2:
            printf("Square edge length: ");
            scanf("%f",&square1.edge);
            printf("Square area: %f\n",Square_area(square1));
            break;
        case 3:
            printf("Üçgen base length: ");
            scanf("%f",&triangle1.base);
            printf("Üçgen height: ");
            scanf("%f",&triangle1.height);
            printf("Üçgen area: %f\n",Triangle_area(triangle1));
            break;
        case 4:
            printf("pi=3.14\n");
            printf("Circle radius length: ");
            scanf("%f",&circle1.radius);
            printf("Circle area: %f\n",Circle_area(circle1));
            break;
        default:
            printf("Wrong input.\n");
            break;
        
    }

    return 0;    
    
}
