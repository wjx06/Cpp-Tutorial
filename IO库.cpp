#include <iostream>
int main() {
	int year1, year2;
	std::cout << "请输入你爹的出生年份: ";
	std::cin >> year1 ;
	std::cout << "请输入 你妈的 出生年份: ";
	std::cin >> year2;
	std::cout << "你爹 活了 " << 2025 - year1 << " 年" << std::endl ;
	std::cout << "你妈的 妈妈生的 你妈 活了 " << 2025 - year2 << " 岁" << std::endl ;
	return 0;
}

