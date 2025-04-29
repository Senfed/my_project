#include <iostream>
#include <cmath>

// Функция для вычисления периметра треугольника
double perimetr(double a, double b, double c) {
    return a + b + c;
}

// Функция для вычисления площади по формуле Герона
double ploshad(double a, double b, double c) {
    double p = (a + b + c) / 2; 
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Функция для проверки, является ли треугольник равнобедренным
bool ravnobed(double a, double b, double c) {
    return (a == b || a == c || b == c);
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b, c;

    std::cout << "Введите стороны треугольника (a, b, c): ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "Периметр: " << perimetr(a, b, c) << std::endl;
        std::cout << "Площадь по формуле Герона: " << ploshad(a, b, c) << std::endl;

        if (ravnobed(a, b, c)) {
            std::cout << "Треугольник равнобедренный." << std::endl;
        }
        else {
            std::cout << "Треугольник не равнобедренный." << std::endl;
        }
    }
    else {
        std::cout << "Треугольник с такими сторонами не существует." << std::endl;
    }
    return 0;
}
