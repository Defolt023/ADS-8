// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAINH
#define INCLUDE_TRAINH

class Train {
 private:
  struct Cage {
    bool light; // состояние лампочки
    Cage next;
    Cageprev;
  };
  int countOp; // счетчик шагов (число переходов из вагона в вагон)
  Cage *first; // точка входа в поезд (первый вагон)
 public:
  Train();
  void addCage(bool light); // добавить вагон с начальным состоянием лампочки
  int getLength();          // вычислить длину поезда
  int getOpCount();         // вернуть число переходов (из вагона в вагон)
};
#endif  // INCLUDE_TRAINH
