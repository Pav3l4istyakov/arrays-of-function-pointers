#include <iostream>

void printStatus(int status) {
    const char* statusMessages[] = { "���������", "�������", "�����", "������" };

    if (status >= 0 && status < 4) {
        std::cout << "������: " << statusMessages[status] << std::endl;
    }
    else {
        std::cout << "�������� ������" << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    int currentStatus = 1; 
    printStatus(currentStatus);

    return 0;
}