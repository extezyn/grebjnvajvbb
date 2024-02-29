#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RUS");

    int num = 0;
    cout << "Выберите действие:\n1. Задом на перед\n2. Без гласных\n3. Без согласных\n4. Рандомно раскидать\n";
    cin >> num;

    cout << "Введите слово: ";
    string slovo;
    cin >> slovo;

    switch (num) {
    case 1:
    {
        string reversed = "";
        for (int i = slovo.length() - 1; i >= 0; i--) {
            reversed += slovo[i];
        }
        cout << "\n" << reversed << endl;
    }
    break;

    case 2:
    {
        string withoutVowels = "";
        string vowels = "aeiouAEIOUуыеаоэяиюУЕЫАОЭЯИЮ";
        for (char c : slovo) {
            if (vowels.find(c) == string::npos) {
                withoutVowels += c;
            }
        }
        cout << "\n" << withoutVowels << endl;
    }
    break;

    case 3:
    {
        string withoutConsonants = "";
        string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZйцкнгшщзхъфвпрлджчсмтбьЙЦКНГШЩЗХЪФВПРЛДЖЧСМТЬБ";
        for (char c : slovo) {
            if (consonants.find(c) == string::npos) {
                withoutConsonants += c;
            }
        }
        cout << "\n" << withoutConsonants << endl;
    }
    break;

    case 4:
    {
        string shuffled = slovo;
        random_shuffle(shuffled.begin(), shuffled.end());
        cout << "\n" << shuffled << endl;
    }
    break;

    default:
        cout << "Некорректный выбор действия." << endl;
        break;
    }

    return 0;
}