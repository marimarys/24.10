#include <iostream>
using namespace std;
int main() {
	//���� ����� ����� n. ������� n ��� ������ @
	/*int n;
	cin >> n;
	for (int i = 1; i <= n; i += 1) {
		cout << '@';
	}*/
	//���� ��� ����� � � � (�<�). ����� ����� ������ ����� �� ��������� �-�.
	/*int x, y, i, sum = 0;
	cout << "Vvedite x:";
	cin >> x;
	cout << "Vvedite y:";
	cin >> y;
	i = x;
	while (i <= y) {
		if (i % 2 == 0) {
			sum += i;
		}
		i++;
	}
	cout << sum << endl;*/
	//���� ��� ����� � � �. ���������� �������� ����� �� ��������� �-� � ������� ��������.
	/*int x, y;
	cout << "Vvedite x:";
	cin >> x;
	cout << "Vvedite y:";
	cin >> y;
	for (int i = y; i >= x; i--) {
		if (i % 2 != 0) {
		}
	}
	cout << i << endl;*/
	//���������� ������������� 20�8 �� �������� #
	/*for (int i = 0; i < 20; i++) cout << '#';
	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << '#';
		for (int e = 0; e < 18; e++) cout << ' ';
		cout << '#' << endl;
	}
	for (int i = 0; i < 20; i++) cout << '#';
	cout << endl;*/
	//���� ����� ������������� ����� n. ������� ������������ ����� �� ������� n, ������� ������� �� 3
	/*int n;
	int i = 1;
	int p = 1;
	cin >> n;
	while (i <= n) {
		if (i % 3 == 0) {
			p *= i;
		}
		i++;
	}
	cout << p << endl;*/
	//������ ����������� ����� n. ����� ���������� ����������� �����, �� ������������� n � �� ��������� �� �� ���� �� ����� 2, 3, 5
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			sum += 1;
		}

	}
	cout << sum << endl;
}