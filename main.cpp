#include <iostream>
#include <string>

int main() {
    const char *symbl = "0123456789abcdefghxyzABCDEFGHXYZ";
    /// длинна строки наверное вычислять должна 1 раз ? 
    /// не соответствует требованиям задания пароли
    const size_t lenght = strlen(s);
    for (int i = 0; i < lenght; i++)
        for (int j = 0; j < lenght; j++)
            for (int k = 0; k < lenght; k++)
                for (int l = 0; l < lenght; l++)
                    for (int m = 0; m < lenght; m++)
                           std::cout << symbl[i] << symbl[j] << symbl[k] << symbl[l] << symbl[m] << std::endl;
    return 0;
}
