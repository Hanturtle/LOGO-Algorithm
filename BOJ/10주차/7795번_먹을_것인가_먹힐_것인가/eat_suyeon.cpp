#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int T, N, M, sum = 0;
	vector<int> aNum, bNum;
	cin >> T;

	while (T--) {
		sum = 0;
		aNum.clear(); bNum.clear();
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			int tmp;
			cin >> tmp;
			aNum.push_back(tmp);
		}

		for (int i = 0; i < M; i++) {
			int tmp;
			cin >> tmp;
			bNum.push_back(tmp);
		}

		sort(aNum.begin(), aNum.end());
		sort(bNum.begin(), bNum.end());

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (aNum[i] <= bNum[j]) {
					break;
				}
				sum++;
			}
		}
		cout << sum << endl;
	}
}
