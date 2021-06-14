#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0, sum = 0;
    queue<int> q;
    queue<int> now;
    
    for (int i = 0; i < truck_weights.size(); i++) {
        q.push(truck_weights[i]);
    }
    
    while (1) {
        if (now.size() == bridge_length && q.empty() && sum == 0) {
            return answer;
        }
        if (now.size() == bridge_length) {
            sum -= now.front();
            now.pop();
        }
        if (!q.empty() && (q.front() + sum) <= weight) {
            sum += q.front();
            now.push(q.front());
            q.pop();
        }
        else{
            now.push(0);
        }
        answer++;
    }
    return answer;
}
