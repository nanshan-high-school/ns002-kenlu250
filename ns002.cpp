#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<char> people;
  int times;

  cin >> times;

  char num[times];

  for (int all = 0; all < times; all++){
    for (int i = 0; i < times; i++){
      cin >> num[i];
      people.push(num[i]);
    }
    
    for (int k = 0; k < times; k++){
      if (num[k] == '(' && num[k+1] == ')'){ //因為pop掉的跟原本的array無關，所以會出現錯誤
        cout << k + 1;

        for (int m = 0; m < 2; m++){
          people.pop(); 
        }
      }
    }
  }
  
}
