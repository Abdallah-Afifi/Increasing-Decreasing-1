#include <iostream>
#define ull unsigned long long
using namespace std;


void checkType(ull arr[], int n)
{

	for (int i = 0; i < n-1; i++) {
		if (arr[i] < arr[i + 1]) {
			if (i == n - 2) {
				cout << "increasing";
			}
		}
		else exit;;
	}
	for (int i = 0; i < n-1; i++) {
		if (arr[i] > arr[i + 1]) {
			if (i == n - 2) {
				cout << "decreasing";
			}
		}
		else exit;
	}
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			if (i == n - 2) {
				cout << "equal";
			}
		}
		else exit;
	}
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] < arr[i + 1]&&arr[n-1]>arr[n-2]) {
			if (i == n - 2) {
				cout << "decreasing";
			}
		}
		else exit;
	}




			/*if (arr[0] <= arr[1] && arr[n - 2] <= arr[n - 1])
				//cout << "increasing";

		else if (arr[0] >= arr[1] && arr[n - 2] >= arr[n - 1])
			cout << "decreasing";

		else if (arr[0] <= arr[1] && arr[n - 2] >= arr[n - 1])
			cout << "nothing";


		else
			cout << "equal";*/
}

int main()
{
    ull arr[100000];
	int T = 0;
	

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> arr[i];
	}
	int n = T;

	checkType(arr, n);

	return 0;
}

