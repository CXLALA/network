#include <iostream>
#include <string>
using namespace std;

const int MAX_NETWORK_SIZE = 100;
int main(void) {

	// m(��), n(��)
	int m = 0, n = 0;
	// strNodeBridge ������
	string strNodeBridge = "";

	cin >> m >> n;
	cin >> strNodeBridge;

	// �����С�������ŵĺϷ��Լ��
	if ( m < 0 || n < 0 || (m == 0 && n == 0) ) {
		cout << "Number out of range.";
		return -1;
	}
	// ����ռ�ͳ�ʼ��
	int** network = new int*[2 * m + 1];
	for (int i = 0; i < (2 * m + 1); ++i) {
		network[i] = new int[2 * n + 1];
	}
	for (int i = 0; i < (2 * m + 1); ++i) {
		for (int j = 0; j < (2 * n + 1); ++j) {
			// ��ʼ��Ϊǽ
			network[i][j] = 0;
		}
	}

	int startX = 0, startY = 0, endX = 0, endY = 0;
	string strSelectNode = "";    // ѡȡ�ڵ���ʱ����
	bool isStartCell = false;
	for (int i = 0; i < strNodeBridge.length(); ++i) {
		if (strNodeBridge[i] == ',' && !isStartCell) {  // startX
			isStartCell = true;
			int j = 0;
			while (strSelectNode[j] != '\0') {
				if (strSelectNode[j] >= '0' && strSelectNode[j] <= '9') {

				}
				else {
					cout << "Invalidnumber format." << endl;
					return -1;
				}
			}
		}else if (strNodeBridge[i] == ' ') {   // startY

		}else if (strNodeBridge[i] == ';' || strNodeBridge[i+1] == '\0') {   // endY
			int j = 0;
			while (strSelectNode[j] != '\0') {
				if (strSelectNode[j] >= '0' && strSelectNode[j] <= '9') {

				}
				else {
					cout << "Invalid number format." << endl;
					return -1;
				}
			}

			if (startX < 0 || startY < 0 || endX < 0 || endY < 0) {
				cout << "Number out of range." << endl;
				return -1;
			}
			else {
				// network����
				if(){
					cout << "Incorrect command format." << endl;
					return -1;
				}else {
					// network��ֵ
				}
			}

		}else if (strNodeBridge[i] == ',' && !isStartCell) {    // startY
			isStartCell = false;
			int j = 0;
			while (strSelectNode[j] != '\0') {
				if (strSelectNode[j] >= '0' && strSelectNode[j] <= '9') {

				}
				else {
					cout << "Invalidnumber format." << endl;
					return -1;
				}
			}
		}
	}

	return 0;
}