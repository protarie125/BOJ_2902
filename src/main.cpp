#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	const auto& n = s.length();

	auto oss = ostringstream{};
	oss << s[0];
	for (auto i = 1; i < n; ++i) {
		if ('-' == s[i]) {
			oss << s[i + 1];
		}
	}

	cout << oss.str();

	return 0;
}