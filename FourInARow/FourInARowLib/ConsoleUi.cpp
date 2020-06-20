#include "pch.h"

#include <iostream>

#include "ConsoleUi.h"

int ConsoleUi::showMultipleChoice(std::string message, std::vector<std::string> answers) const
{
    int result;

    std::cout << message << std::endl;

    for (int i = 0; i < answers.size(); i++) {
        std::cout << i + 1 << ": " << answers[i] << std::endl;
    }

    std::cout << "Answer: ";
    std::cin >> result;

    while (result > answers.size() || result < 1 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "The given answer was invalid! Please enter a new answer: ";
        std::cin >> result;
    }

    return result;
}

ConsoleUi::~ConsoleUi()
{
}

void ConsoleUi::drawGame() const
{
}

int ConsoleUi::readColumn() const
{
    return 0;
}

void ConsoleUi::showWinner(TeamEnum team) const
{
}

void ConsoleUi::showMessage() const
{
}
