/*Your task is to create a function that does four basic mathematical operations.

The function should take three arguments - operation(string/char), value1(number), value2(number).
The function should return result of numbers after applying the chosen operation.
Examples(Operator, value1, value2) --> output

('+', 4, 7) --> 11
('-', 15, 18) --> -3
('*', 5, 5) --> 25
('/', 49, 7) --> 7

*/

int basic_op(char op, int value1, int value2) {
  
   int sol;

    switch (op){

    case '+' :
        sol = value1 + value2;
        break;

    case '-' :
        sol = value1 - value2;
        break;
    
    case '*':
        sol = value1 * value2;
        break;

    case '/': 
        sol = value1 / value2;
        break;

    default:
        printf("opecacion no reconocida...\n");
        break;
    }

    return sol;
  
}
