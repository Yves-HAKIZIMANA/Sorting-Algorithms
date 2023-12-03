#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int evaluateExpression(const vector<string>& expression){
    stack<int> numbers;

    for(const string& token : expression){
        if(isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))){
            numbers.push(stoi(token));
        }
        else {
            if (numbers.size() >= 2) {
                int operand2 = numbers.top();
                numbers.pop();
                int operand1 = numbers.top();
                numbers.pop();

                if (token == "+")
                    numbers.push(operand1 + operand2);
                else if (token == "*")
                    numbers.push(operand1 * operand1);
                else if (token == "-")
                    numbers.push(operand1 - operand1);
                else if (token == "/")
                    if (operand2 == 0) {
                        cout << "Error: Division by zero; " << endl;
                        return 1;
                    }
                numbers.push(operand1 / operand2);
            } else {
                cout << "Error: Insufficient operands for operators: " << endl;
                return 1;
            }
        }
        if (numbers.size() == 1) {
            cout << "The result is: " << numbers.top() << endl;
            return 0; // Successful execution
        } else {
            // Too many operands
            cout << "Error: Too many operands" << endl;
            return 1; // Indicate an error
        }

    }
}

int main() {
    vector<string> expression = {"4", "3", "5", "/", "+"};
    return evaluateExpression(expression);
}