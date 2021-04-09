#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    
    string answer = "";

    for (int i = 0, index = -1; i < number.length() - k; i++) {
        char max = 0; // 최대값
        for (int j=index+1; j <= k+i; j++) { // index(이전 최대값)의 위치 다음부터 비교
            if (max < number[j]){ // max에 최대값 저장
                max = number[j];
                index = j; // 최대값의 위치 index에 저장
                if (number[j] == '9') break; // 9보다 큰 수는 없으므로 예외 (추가함) 테스트케이스10 줄어듬
            }
                   
        }
        answer += max; // 최대값 저장
    }
   
    return answer;
    
}
