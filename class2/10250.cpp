#include <iostream>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	while (T--) {
		int H, W, N = 0;	//높이, 넓이, 손님 번호
		cin >> H >> W >> N;

		int roomNumber = 0;

		if (N % H == 0) {
			roomNumber = H;
			roomNumber *= 100;
			roomNumber += (N / H);
		}
		else {
			roomNumber = N % H;
			roomNumber *= 100;
			roomNumber += (N / H + 1);
		}

		cout << roomNumber << endl;

	}
}