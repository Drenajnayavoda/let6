#include <iostream>

int main() {
    const char *symbl = "0123456789abcdefghxyzABCDEFGHXYZ";
    /// длинна строки наверное вычислять должна 1 раз ? 
    /// не соответствует требованиям задания пароли
    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 32; j++)
            for (int k = 0; k < 32; k++)
                for (int l = 0; l < 32; l++)
                    for (int m = 0; m < 32; m++)
                           std::cout << symbl[i] << symbl[j] << symbl[k] << symbl[l] << symbl[m] << std::endl;
    return 0;
}
