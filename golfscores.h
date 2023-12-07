#ifndef GOLFSCORES_H
#define GOLFSCORES_H
#include <array>

using namespace std;

typedef array<float, 10> Es();
typedef void Ds(array<float, 10> gfs);
typedef float Cs(array<float, 10> gfs);

void runGolfScores();
array<float, 10> entrscore();
void disscores(array<float, 10> gfs);
float calscomea(array<float, 10> gfs);

#endif // !golfscores_h

