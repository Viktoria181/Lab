#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

bool areAlmostEqual(float a, float b, double epsilon) 
{
    return fabs(a - b) < epsilon;
}

void runTests(int numTests, double epsilon) 
{
    int correctDirect = 0;  
    int incorrectDirect = 0; 
    int correctEpsilon = 0;  
    int incorrectEpsilon = 0;

    srand(time(0)); 

    for (int i = 0; i < numTests; ++i) {
        float f1 = static_cast<float>(rand()) / RAND_MAX;  
        float f2 = f1 + static_cast<float>(rand()) / (RAND_MAX * 10000); 

        if (f1 == f2) 
            correctDirect++;
        else 
            incorrectDirect++;

        if (areAlmostEqual(f1, f2, epsilon)) 
            correctEpsilon++;
        else 
            incorrectEpsilon++;
        
    }

    std::cout << "Results from " << numTests << " comparisons: " << std::endl;
    std::cout << "Direct comparison -> Correct: " << correctDirect << ", Incorrect: " << incorrectDirect << std::endl;
    std::cout << "Epsilon comparison - Correct: " << correctEpsilon << ", Incorrect: " << incorrectEpsilon << std::endl;
}

int main() {
    int numTests = 10000; 
    double epsilon = 1e-6; 

    runTests(numTests, epsilon);

    return 0;
}
