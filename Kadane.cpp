#include <iostream>
using namespace std;
const int SIZE = 3 * 10e5 + 100;
int32_t A[SIZE];
int64_t PartSum[SIZE], maxPartSum = -1, MaxArrayElementIfAllNegative = - 10e9 + 1;   //if an array contains negative integers only, the answer will be '0' and it`s wrong, of cousre. In this case, we need to return the largest negative integer as a answer, so the last variable contains it.
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	uint32_t n;
	cin >> n;
	PartSum[0] = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> A[i];
		PartSum[i] = PartSum[i - 1] + A[i];
		if (PartSum[i] < 0) PartSum[i] = 0;
		if (PartSum[i] > maxPartSum) maxPartSum = PartSum[i];
		if (A[i] > MaxArrayElementIfAllNegative) MaxArrayElementIfAllNegative = A[i];
	}
	if (maxPartSum) cout << maxPartSum;
	else cout << MaxArrayElementIfAllNegative;
	return 0;
}
