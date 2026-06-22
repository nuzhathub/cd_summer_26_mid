#include <iostream>
using namespace std;

// Task 1
void checkNumberString()
{
    string userInput;
    cout << "Enter a string: ";
    cin >> userInput;

    for(int i = 0; i < userInput.length(); i++)
    {
        if(userInput[i] != '0' && userInput[i] != '1' &&
           userInput[i] != '2' && userInput[i] != '3' &&
           userInput[i] != '4' && userInput[i] != '5' &&
           userInput[i] != '6' && userInput[i] != '7' &&
           userInput[i] != '8' && userInput[i] != '9')
        {
            cout << "The string contains non-numeric characters.";
            return;
        }
    }

    cout << "The string is numeric.";
}

// Task 2
void findOperators()
{
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    int count = 1;

    for(int i = 0; i < expression.length(); i++)
    {
        if(expression[i] == '+' || expression[i] == '-' ||
           expression[i] == '*' || expression[i] == '/' ||
           expression[i] == '%' || expression[i] == '=')
        {
            cout << "Operator " << count << "  "
                 << expression[i] << endl;
            count++;
        }
    }
}

// Task 3
void detectComment()
{
    string text;
    cout << "Enter comment text: ";
    cin >> text;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == '/')
        {
            if(text[i + 1] == '/')
            {
                cout << "This is a single-line comment.";
            }
            else if(text[i + 1] == '*')
            {
                if(text[text.length() - 2] == '*' &&
                   text[text.length() - 1] == '/')
                {
                    cout << "This is a multi-line comment.";
                }
            }
        }
    }
}

// Task 4
bool isDigitCharacter(char ch)
{
    if(ch != '0' && ch != '1' && ch != '2' &&
       ch != '3' && ch != '4' && ch != '5' &&
       ch != '6' && ch != '7' && ch != '8' &&
       ch != '9')
    {
        return false;
    }

    return true;
}

bool validIdentifierCharacter(char ch)
{
    if((ch >= 'a' && ch <= 'z') ||
       (ch >= 'A' && ch <= 'Z') ||
       ch == '_' || isDigitCharacter(ch))
    {
       return true;
    }

    return false;
}

bool checkIdentifier()
{
    string word;
    cout << "Enter identifier: ";
    cin >> word;

    if((word[0] >= 'a' && word[0] <= 'z') ||
       (word[0] >= 'A' && word[0] <= 'Z') ||
       word[0] == '_')
    {
        for(int i = 1; i < word.length(); i++)
        {
            if(!validIdentifierCharacter(word[i]))
            {
                return false;
            }
        }

        return true;
    }

    return false;
}

// Task 5
void calculateAverage()
{
    int totalItems;
    cout << "Enter array size: ";
    cin >> totalItems;

    int numbers[totalItems];

    for(int i = 0; i < totalItems; i++)
    {
        cin >> numbers[i];
    }

    int total = 0;

    for(int i = 0; i < totalItems; i++)
    {
        total += numbers[i];
    }

    double average = (double)total / totalItems;

    cout << "Average value: " << average << endl;
}

// Task 6
void displayMinMax()
{
    int count;
    cout << "Enter array size: ";
    cin >> count;

    int values[count];

    for(int i = 0; i < count; i++)
    {
        cin >> values[i];
    }

    int smallest = values[0];
    int largest = values[0];

    for(int i = 0; i < count; i++)
    {
        if(values[i] < smallest)
        {
            smallest = values[i];
        }

        if(values[i] > largest)
        {
            largest = values[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
}

// Task 7
void showFullName()
{
    string firstName, lastName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Complete Name: "
         << firstName + " " + lastName << endl;
}

int main()
{
    

    return 0;
}
