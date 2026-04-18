#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string secretWord = "Завод";
    std::string guessWord;

    do {
        std::cout << "Угадайте слово: ";
        std::cin >> guessWord;
        if (guessWord == secretWord) {
            std::cout << "Правильно! Вы победили! Загаданное слово — " << secretWord << std::endl;
            break;
        } else {
            std::cout << "Неправильно ):" << std::endl;
        }
    } while (true);

    return 0;
}
