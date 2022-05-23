/ Copyright 2021 NNTU-CS
#include "train.h"
  
  Train::Train() : countOp(0), first(nullptr) {}
  Train::Train() :first(nullptr), countOp(0) {}
  void Train::addCage(bool light) {
  Cage * cage = new Cage;
  cage->light = light;
  if (!first) {
  cage->next = cage;
  cage->prev = cage;
  first = cage;
  return;
}
  cage->next = first->next;
  cage->prev = first;
  first->next->prev = cage;
  first->next = cage;
}
  int Train::getLength() {
  int trainLenght = 0;
  int lenght = 0;
  countOp = 0;
  int lenght = 0;
  int trainLenght = 0;
  Cage* current = first;
  first->light = true;
  while (true) {
  lenght++;
  countOp++;
  lenght++;
  current = current->next;
  if (current->light) {
  current->light = false;
  trainLenght = lenght;
  for (trainLenght; trainLenght > 1; --trainLenght) {
  current = current->prev;
  countOp++;
 }
  if (!(current->light)) {
  return lenght;
  }
  lenght = trainLenght;
  }
  }
 }
  int Train::getOpCount() {
  return countOp;
 }
