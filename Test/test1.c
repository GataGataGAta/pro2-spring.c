#include <math.h>

void transform(double vector[3], double matrix[3][3]) {
    // Original vector
    double originalVector[3] = {vector[0], vector[1], vector[2]};

    // Clear the vector
    vector[0] = 0.0;
    vector[1] = 0.0;
    vector[2] = 0.0;

    // Apply the transformation matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            vector[i] += matrix[i][j] * originalVector[j];
        }
    }
}

void createTransformationMatrix(double matrix[3][3], double theta, double tx, double ty) {
    // Clear the matrix
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            matrix[i][j] = 0;

    // Rotation and translation
    matrix[0][0] = cos(theta);
    matrix[0][1] = -sin(theta);
    matrix[0][2] = tx;
    matrix[1][0] = sin(theta);
    matrix[1][1] = cos(theta);
    matrix[1][2] = ty;
    matrix[2][2] = 1.0;
}

int main() {
    double vector[3] = {100.0, 50.0, 1.0}; // An example vector
    double matrix[3][3]; // Transformation matrix

    // Create the transformation matrix
    createTransformationMatrix(matrix, M_PI / 4, 10.0, 20.0);

    // Apply the transformation
    transform(vector, matrix);

    // Now vector holds the transformed coordinates
    return 0;
}
