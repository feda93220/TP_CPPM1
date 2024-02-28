#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;


int try_password(int password) {
    cout << password << "\n";
    return 0;
}


int main() {
	auto start = high_resolution_clock::now();

    for (int i = 0; i < 100000; i++) {
        try_password(i);
    }

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Temps écoulé en C++ : " << duration.count() << " microsecondes" << endl;
	return 0;
}
