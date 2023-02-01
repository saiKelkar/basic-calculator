//Basic operation on two integer numbers

#include <iostream>

int main (){

    int a , b;
    std :: cout << "Enter two numbers \n";
    std :: cin >> a >> b;

    char operation;
    std :: cout << "Enter a operator: + - * / \n";
    std :: cin >> operation;

    int result;
    switch (operation)
    {
    case '+':
        result = a + b;
        std :: cout << result << '\n';
        // given 4 and 4, outputs 8
        break;

    case '-':
        result = a - b;
        std :: cout << result << '\n';
        // given 4 and 4, outputs 0
        break;

    case '*':
        result = a * b;
        std :: cout << result << '\n';
        // given 4 and 4, outputs 16
        break;

    case '/':
        result = a / b;
        std :: cout << result << '\n';
        // given 4 and 4, outputs 1
        break;
    
    default:
        std :: cout << "Please enter from the given operators \n";
        break;
    }

    return 0;
}
