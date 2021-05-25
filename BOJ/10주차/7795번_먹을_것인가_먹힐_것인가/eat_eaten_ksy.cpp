#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int result = 0;
int L, R, mid;

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    int T, N, M;
    cin >> T;
    while (T--) {
        
        cin >> N >> M;
        vector<int> A(N), eaten(M);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> eaten[i];
        }
        sort(eaten.begin(), eaten.end());
        sort(A.begin(), A.end());
        
        for (int i = 0; i < A.size(); i++) {
            L = 0;
            R = (int)eaten.size()-1;
            while (L <= R) {
                mid = (L + R) /2;
                if (A[i] <= eaten[mid]) {
                    R = mid - 1;
                }
                else {
                    L = L+1;
                    result++;
                }
            }
        }
        cout << result << "\n";
        result = 0;
    }
    
}

