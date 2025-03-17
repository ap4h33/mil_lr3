//вар 12
#include <iostream>

double enter_number_x(){
    double num = 0.0;
    std::cout << "Введите число: ";
    std::cin >> num;
    return num;
}

double enter_number_y(){
    double num = 0.0;
    std::cout << "Введите число: ";
    std::cin >> num;
    return num;
}

double enter_number_z(){
    double num = 0.0;
    std::cout << "Введите число: ";
    std::cin >> num;
    return num;
}

double decimal_sum(double x = 0.0, double y = 0.0, double z = 0.0){
    return (x - int(x)) + (y - int(y)) + (z - int(z));
}

double full_sum(double x = 0.0, double y = 0.0, double z = 0.0){
    return int(x) + int(y) + int(z);
}

int main() {
    int choice = 0;
    std::cout << "Task 1. Введение числа х."
        << "\nTask 2. Введение числа у."
        << "\nTask 3. Введение числа z."
        << "\nTask 4. Сумма дробных частей чисел."
        << "\nTask 5. Сумма целых частей чисел."
        << "\nPlease enter the desired task or 0 if you wish to close the app: ";
    std::cin >> choice;
    switch(choice) {
        case 0:
            return 0;
        case 1:
            enter_number_x();
            break;
        case 2:
            enter_number_y();
            break;
        case 3:
            enter_number_z();
            break;
        case 4:
            decimal_sum();
            break;
        case 5:
            full_sum();
            break;
    }
    return 0;
}