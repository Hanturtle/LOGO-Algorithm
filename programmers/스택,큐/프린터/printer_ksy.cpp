#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    for (int i = 0; i < priorities.size(); i++) {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    while (!q.empty()) {
        int num = q.front().first;
        int val = q.front().second;
        q.pop();
        if (pq.top() == val) {
            pq.pop();
            answer++;
            if (num == location) {
                return answer;
            }
        }
        else
            q.push({num, val});
    }
    return answer;
}
