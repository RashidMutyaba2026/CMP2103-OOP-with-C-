#include <iostream>
#include <vector>

int main() {
    // Two-dimensional vector containing students' answers
    std::vector<std::vector<char>> answers = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 0
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'}, // Student 1
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'}, // Student 2
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'}, // Student 3
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 4
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 5
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 6
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}  // Student 7
    };

    // One-dimensional vector containing the correct answer key
    std::vector<char> key = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    // Grade all students
    for (size_t i = 0; i < answers.size(); ++i) {
        int correctCount = 0;

        // Compare each question's answer to the key
        for (size_t j = 0; j < answers[i].size(); ++j) {
            if (answers[i][j] == key[j]) {
                correctCount++;
            }
        }

        std::cout << "Student " << i << "'s correct count is " << correctCount << std::endl;
    }

    return 0;
}
