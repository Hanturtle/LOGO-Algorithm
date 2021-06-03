#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> cate;
    for (auto& i : clothes) {
        cate[i[1]]++;
    }
    map<string, int>::iterator i;
    for (i = cate.begin(); i != cate.end(); i++) {
        answer *= (i->second + 1);
    }
    answer--;
    return answer;
}
