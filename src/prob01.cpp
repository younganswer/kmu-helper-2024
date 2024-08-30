#include <iostream>
#include <string>
#include <vector>

int errCnt = 0;

int main(void) {
    while (true) {
        std::vector<char> result;
        std::string str;
        std::cin >> str;

        bool flag = true;
      
        int count = 0;
      
        for (int i = str.size() - 1; i >= 0; i--) {
            if (!(str[i] <= '9' && str[i] >= '0')) {
                flag = false;
                break;
            }
            count++;
            result.push_back(str[i]);
            if (count != str.size() && !(count % 3) && str[i-1] != '-') {
                result.push_back(',');
            }
        }

        if (!flag) {
            cout << "INPUT ERROR\n";
            errCnt++;
            if (errCnt == 3) {
                std::cerr << "3 time Error\n";
                return (1);
            }
            continue;
        }

        for (int i = result.size()-1; i >= 0; i--) {
            std::cout << result[i];
        }
    }
}
