#include <iostream>

void printStatus(int status) {
    const char* statusMessages[] = { "неактивен", "активен", "пауза", "ошибка" };

    if (status >= 0 && status < 4) {
        std::cout << "Статус: " << statusMessages[status] << std::endl;
    }
    else {
        std::cout << "Неверный статус" << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    int currentStatus = 1; 
    printStatus(currentStatus);

    return 0;
}