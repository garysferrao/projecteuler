#include <iostream>
using namespace std;

// If we list all the natural numbers below 10 that are multiples of 3 or 5, we
// get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the
// multiples of 3 or 5 below 1000.
inline int sum(int, int);

int main(int argc, char** argv) {
	int ans = 0;
	ans += sum(3,1000);
	ans += sum(5,1000);
	ans -= sum(15,1000);
	cout << "Answer: " << ans << endl;
	return 0;
}

inline int sum(int base, int limit) {
	int n = (limit-1)/base; //number of multples up to and excluding `limit`
	return n*(n+1)/2*base;
}