#include<iostream>
#include<algorithm>
#include<vector>
using std::cin;
using std::cout;
using std::endl;

std::vector<int> vec;

void sb(int x) {
	vec.push_back(x % 10);
	x /= 10;
	vec.push_back(x % 10);
	x /= 10;
	vec.push_back(x % 10);
}
int main() {
	for(int i = 100; i <= 333; i++) {
		int A = i, B = 2 * i, C = 3 * i;
		vec.clear();
		sb(A); sb(B); sb(C);
		std::sort(vec.begin(), vec.end());
		for(int j = 0; j < 9; j++) {
			if(j + 1 != vec[j]) break;
			if(j == 8) {
				cout << A << ' ' << B << ' ' << C << endl;
			}
		}
	}
	return 0;
}
