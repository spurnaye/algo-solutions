int solve(int x, int y) {
    std::vector<int> pair1 = {0,1,6,8,9};
    std::vector<int> pair2 = {0,1,9,8,6};
    int count = 0;
    for(int i =x; i <= y; ++i){
      int temp = i;
      std::vector<int> digits;
      int mirror_num = 0;
      int dig = 0;
      while(temp){
        dig = temp%10;
        auto found = std::find(pair1.begin(), pair1.end(), dig);
        if(found != pair1.end()){
            dig = pair2.at(std::distance(pair1.begin(), found));
        }else{
          break;
        }
        digits.push_back(dig);
        temp /= 10;
       }

       for(auto el: digits){
         mirror_num *= 10;
         mirror_num += el;
       }
       if(mirror_num == i){
         ++count;
       }
      mirror_num=0;
      digits.clear();
    }
  return count;
}

int main(){
}
