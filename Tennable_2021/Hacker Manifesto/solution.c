#include <iostream>
#include <stdio.h>
#include <vector>

int main(){
  unsigned char a,b,c;
  unsigned int temp, index;
  bool trace = false;
  unsigned int lookback;

  std::vector<char> res;
  while (scanf("%c%c%c", &a, &b, &c) != -1){
    index = res.size();
    if (a != 0){
      lookback = a + (256 * (b % 4));
      temp = res.size() - lookback;
      for(int i = 0; i < b/4; ++i)
        res.push_back(res[temp + i]);
    }
    res.push_back(c);
    for(int i = index; i < res.size(); ++i)
      std::cout << res[i];
  }
  return 0;
}
