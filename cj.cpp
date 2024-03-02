#include <bits/stdc++.h>

using namespace std;

void reverse(string word) {
    reverse(word.begin(), word.end());
    cout << "Перевернутое слово: " << word << endl;
}

void removeVowels(string word) {
    string result;
    for (char c : word) {
        if (c != 'а' && c != 'е' && c != 'ё' && c != 'и' && c != 'о' && c != 'у' && c != 'ы' && c != 'э' && c != 'ю' && c != 'я') {
            result += c;
        }
    }
    cout << "Слово без гласных: " << result << endl;
}

void removeConsonants(string word) {
    string result;
    for (char c : word) {
        if (c == 'а' || c == 'е' || c == 'ё' || c == 'и' || c == 'о' || c == 'у' || c == 'ы' || c == 'э' || c == 'ю' || c == 'я') {
            result += c;
        }
    }
    cout << "Слово без согласных: " << result << endl;
}

void shuffle(string word) {
    random_device rd;
    mt19937 g(rd());
    shuffle(word.begin(), word.end(), g);
    cout << "Перемешанное слово: " << word << endl;
}

int main() {
    string word;
    int choice;

    cout << "Введите слово: ";
    cin >> word;

    cout << "Выберите действие:" << endl;
    cout << "1. Перевернуть слово" << endl;
    cout << "2. Удалить гласные из слова" << endl;
    cout << "3. Удалить согласные из слова" << endl;
    cout << "4. Перемешать буквы в слове" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            reverse(word);
            break;
        case 2:
            removeVowels(word);
            break;
        case 3:
            removeConsonants(word);
            break;
        case 4:
            shuffle(word);
            break;
        default:
            cout << "Неверный выбор" << endl;
            break;
    }

    return 0;
}
