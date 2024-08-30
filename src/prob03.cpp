#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int answer[3];
    int N[3];

    cout << "press number: ";
    for (int i = 0; i < 3; i++) {
        cin >> answer[i];
    }
    while (true) {
        string N;
        cout << "press input: ";
        for (int i = 0; i < 3; i++)
            cin >> N[i];

        int strike, ball;
        for (int i = 0; i < 3; i++)
        {
            if (answer[i] == N[i])
                strike++;
            vector<int> v;
            for (int i = 0; i < 3; i++) 
            {
                v.push_back(answer[i]);
                v.push_back(N[i]);
            }
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size() - 1; i++) 
            {
                if (v[i] == v[i+1])
                    ball++;
            }
            ball -= strike;

            if (ball == 0 && strike == 0)
                cout << "OUT\n";
            else {
                if (ball > 0) cout << ball << "B ";
                if (strike > 0) cout << strike << "S\n";
                if (strike == 3) {
                    cout << "you win!\n";
                    break;
                }
            }
        }
    }

}
