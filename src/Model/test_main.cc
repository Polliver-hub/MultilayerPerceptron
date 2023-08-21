#include "../Controller/controller.h"

int main() {
  s21::Controller *controller =s21::Controller::GetInstance();
  controller->LoadWeights("Weights/weight_for_test.txt", false);
//  for (int i = 0; i < 10; i++) {
    controller->Test("../../emnist-letters/emnist-letters-test.csv", 1);
//  }
  return 0;
}