#include <iostream>
#include <fstream>
#include "Simulator.h"

const int MAX_SIZE_OF_FUNCTION = 7; // including '\0'
const int maxLineLength = BUFFER; // MAX LENGTH
using namespace std;


void printTruthTable(const TruthTable& table) {
    for (int i = 0; i < table.rows; i++) {
        for (int j = 0; j < table.cols; j++) {
            std::cout << table.table[i][j];

            // Ако е предпоследният елемент, добави " : "
            if (j == table.cols - 2) {
                std::cout << " : ";
            }
            // Ако не е последният и предпоследният, добави ", "
            else if (j < table.cols - 2) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
}

TruthTable readTruthTableFromFile(const char* fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }

    char line[maxLineLength];
    int rowCount = 0;
    int colCount = 0;

    // Temporary storage for lines before processing into the table
    char** tempLines = (char**)malloc(100 * sizeof(char*)); // Assuming max. 100 rows
    if (!tempLines) {
        throw std::bad_alloc();
    }

    // Read the lines from the file
    while (file.getline(line, maxLineLength)) {
        // Remove leading spaces
        char* start = line;
        while (isspace(*start)) start++;

        if (*start == '\0') {
            continue;  // Skip empty lines
        }

        // Allocate space for the line
        tempLines[rowCount] = (char*)malloc((strlen(start) + 1) * sizeof(char));
        if (!tempLines[rowCount]) {
            throw std::bad_alloc();
        }

        // Copy the cleaned line into temporary storage
        char* dest = tempLines[rowCount];
        while (*start != '\0') {
            *dest++ = *start++;
        }
        *dest = '\0';

        rowCount++;

        // Calculate the number of columns by counting commas and colons
        if (rowCount == 1) {
            for (int i = 0; i < strlen(tempLines[0]); i++) {
                if (tempLines[0][i] == ',' || tempLines[0][i] == ':') {
                    colCount++;
                }
            }
            colCount++;  // Include the last column after the last separator
        }
    }

    file.close();

    // Create the truth table
    TruthTable tableStruct;
    tableStruct.rows = rowCount;
    tableStruct.cols = colCount;
    tableStruct.table = (char**)malloc(rowCount * sizeof(char*));
    if (!tableStruct.table) {
        throw std::bad_alloc();
    }

    // Process each line and populate the table
    for (int i = 0; i < rowCount; i++) {
        tableStruct.table[i] = (char*)malloc(colCount * sizeof(char));
        if (!tableStruct.table[i]) {
            throw std::bad_alloc();
        }

        int colIndex = 0;
        // Iterate through each character in the line
        for (int j = 0; j < strlen(tempLines[i]); j++) {
            if (tempLines[i][j] == ',' || tempLines[i][j] == ':' || isspace(tempLines[i][j])) {
                continue;  // Skip separators and spaces
            }

            // Copy character into the table
            tableStruct.table[i][colIndex++] = tempLines[i][j];
        }

        // Free the temporary line storage
        free(tempLines[i]);
    }

    // Free the temporary storage for lines
    free(tempLines);

    return tableStruct;
}


TruthTable defineTable() {

    char line[maxLineLength];
    int rowCount = 0;
    int colCount = 0;

    char** tempLines = (char**)malloc(100 * sizeof(char*)); // Предполагаемо макс. 100 реда
    if (!tempLines) {
        throw std::bad_alloc();
    }

    std::cout << "Enter the truth table (comma-separated, use ':' for output). End with an empty line:\n";
    while (true) {

        std::cin.getline(line, maxLineLength);

        // Removing spaces
        char* start = line;
        while (isspace(*start)) start++;

        if (*start == '\0') {
            break;
        }

        tempLines[rowCount] = (char*)malloc((strlen(start) + 1) * sizeof(char));
        if (!tempLines[rowCount]) {
            throw std::bad_alloc();
        }

        char* dest = tempLines[rowCount];
        while (*start != '\0') {
            *dest++ = *start++;
        }
        *dest = '\0';

        rowCount++;

        if (rowCount == 1) {
            for (int i = 0; i < strlen(tempLines[0]); i++) {
                if (tempLines[0][i] == ',' || tempLines[0][i] == ':') {
                    colCount++;
                }
            }
            colCount++;
        }
    }

    // Creating table
    TruthTable tableStruct;
    tableStruct.rows = rowCount;
    tableStruct.cols = colCount;
    tableStruct.table = (char**)malloc(rowCount * sizeof(char*));
    if (!tableStruct.table) {
        throw std::bad_alloc();
    }

    for (int i = 0; i < rowCount; i++) {
        tableStruct.table[i] = (char*)malloc(colCount * sizeof(char));
        if (!tableStruct.table[i]) {
            throw std::bad_alloc();
        }

        int colIndex = 0;
        for (int j = 0; j < strlen(tempLines[i]); j++) {
            if (tempLines[i][j] == ',' || tempLines[i][j] == ':' || isspace(tempLines[i][j])) {
                continue;
            }
            tableStruct.table[i][colIndex++] = tempLines[i][j];
        }

        free(tempLines[i]);
    }

    free(tempLines);

    return tableStruct;
}

void start()
{
    std::cout << "Welcome to the Simulator Program!" << std::endl;
    std::cout << "Here are the available commands you can use:" << std::endl;
    std::cout << std::endl;
    std::cout << "1. 'define' [name] [expression] - Define a new circuit." << std::endl;
    std::cout << "   Example: define myCircuit(a, b): &(a, |(b, c), !(d))" << std::endl;
    std::cout << std::endl;
    std::cout << "2. 'run' [name] [parameters] - Run a circuit with specified parameters." << std::endl;
    std::cout << "   Example: run myCircuit(1, 0)" << std::endl;
    std::cout << std::endl;
    std::cout << "3. 'all' [name] - Get a truth table for the specified circuit." << std::endl;
    std::cout << "   Example: all myCircuit" << std::endl;
    std::cout << std::endl;
    std::cout << "4. 'find' - Find the integrated circuit from console input or file." << std::endl;
    std::cout << "   Example: find circuit (you will be asked for input source)" << std::endl;
    std::cout << std::endl;
}

void startProgram(Simulator simulator)
{
    start();

    while (std::cin)
    {
        char* command = (char*)malloc(MAX_SIZE_OF_FUNCTION * sizeof(char));

        if (command == nullptr) {
            std::cerr << "Memory allocation for 'command' failed!" << std::endl;
            return;
        }

        std::cin >> command;
        //cin.getline(command, MAX_SIZE_OF_FUNCTION, ' ');
        std::cin.ignore();
        int counter = 0;
        if (strcmp(command, "define") == 0)
        {
            char* nameOfFunc = (char*)malloc(BUFFER * sizeof(char));
            cin.getline(nameOfFunc, BUFFER, '(');

            char* expression = (char*)malloc(BUFFER * sizeof(char));
            cin.getline(expression, BUFFER); // maybe till the end of the line // (a, b): &(a, |(b, c), !(d))

            simulator.defineCircuit(nameOfFunc, expression);
            std::cout << std::endl;
            free(expression);
            free(nameOfFunc);
        }
        else if (strcmp(command, "run") == 0)
        {
            char* nameOfFunc = (char*)malloc(BUFFER * sizeof(char));
            cin.getline(nameOfFunc, BUFFER, '(');

            char* arr = (char*)malloc(BUFFER * sizeof(char));
            cin.getline(arr, BUFFER, ')');

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            simulator.runCircuit(nameOfFunc, arr);
            std::cout << std::endl;

            free(nameOfFunc);
            free(arr);
        }
        else if (strcmp(command, "all") == 0)
        {
            char* nameOfFunc = (char*)malloc(BUFFER * sizeof(char));
            cin.getline(nameOfFunc, BUFFER);

            if (!simulator.isCircuitInArr(nameOfFunc))
            {
                std::cerr << "This circuit does not exist! " << std::endl;
                std::cout << std::endl;
                free(nameOfFunc);
                continue;
            }

            int index = simulator.getIndexOfArr(nameOfFunc);
            Circuit* circuit = simulator.getCircuit(index);

            simulator.allCircuit(nameOfFunc, circuit->getExpression(), strlen(circuit->getVariables())); // numOfVariables = (a, b, c) => get them

            std::cout << std::endl;
            free(nameOfFunc);
        }
        else if (strcmp(command, "find") == 0)
        {
            std::cout << "How would you like us to define the integrated circuit?" << std::endl 
                << "Should we take the input from the console or from a file ? " << std::endl
                << "From the console enter 1 " << std::endl 
                << "And from file enter 2." << std::endl;
            int input;

            std::cout << std::endl;
            std::cin >> input;
            std::cout << std::endl;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (input == 1)
            {
                TruthTable table = defineTable();
                simulator.findCircuit(table);
                std::cout << std::endl;
            }
            else if (input == 2)
            {
                try {
                    //Read table
                    std::cout << "Enter the name of the file: " << std::endl;
                    std::cout << "Example: project.txt" << std::endl;

                    char* file = (char*)malloc(BUFFER * sizeof(char));
                    cin.getline(file, BUFFER);

                    TruthTable table = readTruthTableFromFile(file);

                    printTruthTable(table);
                    simulator.findCircuit(table);

                    std::cout << std::endl;

                    free(file);
                }
                catch (const std::exception& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
            }
        }
        else
        {
            std::cerr << "Command of that type does not exist! " << std::endl;
        }
        free(command);
    }
}


int main()
{
    Simulator simulator;
    startProgram(simulator);
}