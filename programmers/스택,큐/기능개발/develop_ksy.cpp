#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    int result = 0, day = 1;

    int done = (99 - progresses[i]) / speeds[i] + 1;
    q.push(done);
    
    for (int i = 1; i < progresses.size(); i++) {
        int done = (99 - progresses[i]) / speeds[i] + 1;
        if (q.front() >= done) {
            day++;
        }
        else {
            answer.push_back(day);
            result += day;
            day = 1;
            q.pop();
            q.push(done);
        }
    }
    if (progresses.size() != result) {
        answer.push_back(day);
    }
    return answer;
}
