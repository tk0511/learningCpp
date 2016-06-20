#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>

int & max(const int & i1, const int & i2);

int main() {
	using namespace std;

	////Type
	//char str[] = "www";
	//char * const cp = str;
	//char * const cp2 = "www";
	//const_cast<char*>(cp) = nullptr;
	//const_cast<char*>(cp2)[1] = 'a';	//undefined behavier

	////Range for
	//string str = "sasdfjasdfn";
	//for (auto & ch : str)ch = 'a' == ch ? 'A' : ch;
	//cout << str << endl;

	//Try
	/*int i1, i2;
	while (cin >> i1 >> i2) {
		try {
			if (0 == i2) throw runtime_error("devide by 0");
			cout << i1 / i2;
		}
		catch (runtime_error & err) {
			cout << err.what() << endl;
			break;
		}
	}*/
	
	//refrence
	/*int i = 10;
	int & i2 = i;
	i2 += 10;
	cout << i << endl;*/

	/*int i1 = 1, i2 = 50;
	max(i1, i2) = 666;
	cout << "i1 = " << i1 << endl << "i2 = " << i2 << endl;*/
	
	vector<int> str = {2,5};
	cout <<str[1] << sizeof(str.begin()) << endl;


	system("pause");
}

int & max(const int & i1, const int & i2) {
	return const_cast<int &>(i1 >= i2 ? i1 : i2);
}
