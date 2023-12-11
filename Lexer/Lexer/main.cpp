#include <iostream>
#include <vector>
#include "lexer.h"
#include "fsm.h"

using namespace std;

int dice();

int main()
{
    setlocale(LC_ALL, "Russian");
    Lexer lexer(cin);

    while (true) {
        // Получаем следующую лексему
        Lexem lex = lexer.getNextLexem();

        // Проверяем, является ли лексема ошибкой
        if (lex == LEX_ERROR) {
            cout << "error" << endl;
            break;
        }

        // Проверяем, достигнут ли конец файла
        if (lex == LEX_EOF) {
            cout << "Достигнут конец файла." << endl;
            break;
        }

        // Выводим информацию о лексеме
        cout << lex.first << endl;
    }

    return 0;
}

