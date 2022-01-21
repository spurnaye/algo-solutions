#include <vector>
#include <iostream>

int score(const std::vector<int>& dice) {
  std::map<int, int> outputs = {{1, 0},{2, 0},{3, 0},{4, 0},{5, 0},{6, 0}};
  for(auto i: dice){
    ++outputs[i];
  }
  
  std::cout << "[";
  for(auto el: dice) std::cout << el << ' ';
  std::cout << "]\n";
  int total_score = 0;
  
  for(auto outcomes: outputs){
     int outcome_num = outcomes.first;
     int outcome_count = outcomes.second;
      
     switch(outcome_num){
         case 1: {
             if(outcome_count % 3 == 0){
                 total_score += (1000* (outcome_count/3));
                 outcome_count = 0;
             }else if (outcome_count > 3){
                 total_score += 1000;
                 outcome_count -= 3;
             }
             total_score += (100* (outcome_count));
             break;
          }
          case 2:
          case 3:
          case 4:
          case 6:{
            if(outcome_count % 3 == 0){
                 total_score += (outcome_num*100* (outcome_count/3));
            } else if (outcome_count > 3){
                 total_score +=  outcome_num*100;
                 outcome_count -= 3;
             }
            break;
          }
          case 5:{
            if(outcome_count % 3 == 0){
                 total_score += (500* (outcome_count/3));
                 outcome_count = 0;
             }else if (outcome_count > 3){
                  total_score += 500;
                  outcome_count -= 3;
             }
             total_score += (50* (outcome_count));
             break;
          }
       }
  }
  return total_score;
}
int main(){
}
