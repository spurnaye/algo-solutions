#include <vector>
#include <cmath>

std::vector<int> snail(const std::vector<std::vector<int>> &maze) {
    size_t column_start = 0;
    size_t row_start = 0;
    size_t maze_size = maze[0].size();
    size_t column_end = maze_size-1;
    size_t row_end = maze_size-1;
    std::vector<int> output(maze_size*maze_size, 0);
    int n = std::ceil(maze_size/2);
    size_t curr = 0;
    while(n--){
        for(int r = row_start; r <= static_cast<int>(row_end); ++r){
            output[curr++] = maze[column_start][r];
        }
        column_start++;
        for(int c = column_start; c <= static_cast<int>(column_end); ++c){
            output[curr++] = maze[c][row_end];
        }
        row_end--;
        for(int r1 = row_end; r1 > static_cast<int>(row_start); r1--){
            output[curr++] = maze[column_end][r1];
        } 
        output[curr++] = maze[column_end][row_start];
        column_end--;
        for(int c = column_end; c >= static_cast<int>(column_start); c--){
            output[curr++] = maze[c][row_start];
        }
        row_start++;
    }
    
    if(maze_size%2!=0){
           output[curr]=maze[row_start][column_start];
    }
  return output;
}

int main(){
}
