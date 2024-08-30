#include <iostream>
#include <vector>
#include <set>

void init(std::vector<int> &arr) {
    int len, tmp;

    std::cin >> len;

    for(int i = 0; i < len; i++) {
        std::cin >> tmp;
        arr.push_back(tmp);
    }
}

set<int> concat(vector<int> &a, vector<int> &b) {
    set<int> c;

    for(int i = 0; i < a.size(); i++) {
        c.insert(a[i]);
    }
    for(int i = 0; i < a.size(); i++) {
        c.insert(b[i]);
    }

    return (c);
}

std::set<int> unions(vector<int> &a, vector<int> &b) {
    std::multiset<int> c;
    std::set<int> result;

    for(int i = 0; i < a.size(); i++) {
        c.insert(a[i]);
    }
    for(int i = 0; i < a.size(); i++) {
        c.insert(b[i]);
    }

    for(auto iter = c.begin(); iter != c.end();) {
        if(iter != c.end() && *iter == *++iter) {
            result.insert(*iter);
        }
    }
    return (result);
}

int main(void) {
    std::vector<int> a, b, c;

    init(a);
    init(b);

    set<int> s1 = concat(a, c);
    set<int> s2 = concat(a, b);
    set<int> s3 = unions(a, b);

    for(auto iter = s1.begin(); iter != s1.end(); ++iter) {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
    for(auto iter = s2.begin(); iter != s2.end(); ++iter) {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
    for(auto iter = s3.begin(); iter != s3.end(); ++iter) {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;

}
