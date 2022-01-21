std::string encrypt(std::string text, int n)
{
  if(text.empty() || n <1) return text;  
  size_t ssize = text.size();
    while(n--){
       std::string even, odd;
       for(size_t i = 0; i < ssize; ++i){
       if(i % 2 == 0){
         even += text[i];
       }else{
           odd += text[i];
       }
    }
    text = odd+even;
   }
  return text;
}

std::string decrypt(std::string text, int n)
{
    if(text.empty() || n <1) return text;
  size_t ssize = text.size();
    while(n--){
         std::string temp = text;
         size_t j = 0;
         for(size_t i = 1; i < ssize; i+=2){
             temp[i] =text[j++];
         }
         for(size_t i = 0; i < ssize; i+=2){
             temp[i] = text[j++];  
         }
         text = temp;
     }
  return text;
}

int main(){
}
