class RGBToHex
{
  public:
  static int round(int input){
    if (input < 0) return 0;
    if(input > 255) return 255;
    return input;
  }
  static std::string get_hex_val(int input){
    char remainder[2];
    int i = 0;
    while (input != 0) {
        int temp = 0;
        temp = input % 16;
 
        if (temp < 10) {
            remainder[i] = temp + 48;
            i++;
        }
        else {
            remainder[i] = temp + 55;
            i++;
        }
        input = input / 16;
    }
    std::string hex_val = "";
    if (i == 2) {
        hex_val.push_back(remainder[1]);
        hex_val.push_back(remainder[0]);
    }
    else if (i == 1) {
        hex_val = "0";
        hex_val.push_back(remainder[0]);
    }
    else if (i == 0)
        hex_val = "00";
  
    //std::reverse(hex_val.begin(), hex_val.end());
    return hex_val;
    
  }
  static std::string rgb(int r, int g, int b){
      r = round(r);
      g = round(g);
      b = round(b);
      
      std::string r_str = get_hex_val(r);
      std::string g_str = get_hex_val(g);
      std::string b_str = get_hex_val(b);
      
      return  r_str + g_str + b_str;
  };
};

int main(){
}
