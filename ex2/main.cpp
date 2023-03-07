//
//  main.cpp
//  university_projects
//
//  Created by Dmitrij on 07.03.2023.
//

#include "minor.h"
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите количество дробей: ";
    cin >> n;
    rational *fractions = new rational[n];
    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Введите числитель и знаменатель дроби " << i + 1 << ": ";
        cin >> a >> b;
        fractions[i].set(a, b);
    }
    for (int i = 0; i < n; i++) {
        fractions[i].show();
    }
    delete[] fractions;
    return 0;
}