#include <iostream>
#include <cmath>

// Sigmoid activation function
double sigmoid(double x) {
    return 1 / (1 + exp(-x));
}

// Forward propagation function
double forwardPropagate(double x1, double x2, double w1, double w2, double b) {
    // Calculate the output of the first neuron
    double z = x1 * w1 + x2 * w2 + b;
    // Return the output of the second neuron (the output layer)
    return sigmoid(z);
}

double backpropagation(){
    return 0;
}

int output(double x){
    if (x > 0.5){
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    // Set the weights and bias
    double w1 = 0.5, w2 = 0.5, b = -0.7;

    // Calculate the output for different input combinations
    std::cout << "0 AND 0: " << forwardPropagate(0, 0, w1, w2, b) << std::endl;
    std::cout << "0 AND 1: " << forwardPropagate(0, 1, w1, w2, b) << std::endl;
    std::cout << "1 AND 0: " << forwardPropagate(1, 0, w1, w2, b) << std::endl;
    std::cout << "1 AND 1: " << forwardPropagate(1, 1, w1, w2, b) << std::endl;
    std::cout << "1 AND 1: " << output(forwardPropagate(1, 1, w1, w2, b))<< std::endl;

    return 0;
}