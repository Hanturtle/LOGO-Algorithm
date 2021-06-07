#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2);
    int sum = brown + yellow;
    for (int i = 3; i < sum/2; i++)
    {
        int temp = sum / i;
        if (sum % i == 0) {
            if ((i - 2) * (temp - 2) == yellow) {
                answer[0] = i;
                answer[1] = temp;
            }
        }
    }
    return answer;
}
