#include "templates/stack.cpp"
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int findPathCount(char* grid, int rows, int cols, char start, char target, char wall){

}


int main(){
  const char START = '<';
  const char TARGET = 'C';
  const char WALL = '*';
  const int M=6;
  const int N=8;

  char Grid[M][N] = {
    {'<', '*', '*', ' ', 'B', ' ', '*', '*',},
    {' ', ' ', ' ', ' ', '*', ' ', ' ', ' ',},
    {'D', ' ', '*', '*', ' ', ' ', '*', '*',},
    {'*', ' ', ' ', '*', ' ', 'C', '*', ' ',},
    {' ', ' ', ' ', ' ', ' ', '*', '*', '*',},
    {'A', ' ', '*', '*', ' ', ' ', '*', '*',}
  };


  cout << findPathCount(Grid, M, N, START, TARGET, WALL);
}
