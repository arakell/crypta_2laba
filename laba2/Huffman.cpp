using namespace std;
#include <iostream>
#include <fstream>
#include <string>

public class Huffman {

private:

	double p1;
	double p2;
	double p3;
	double p4;
	double p5;
	double p6;
	double p7;
	double p8;

	string str1;
	string str2;
	string str3;
	string str4;
	string str5;
	string str6;
	string str7;
	string str8;

public:
	double getp1() {
		return p1;
	}
	double getp2() {
		return p2;
	}
	double getp3() {
		return p3;
	}
	double getp4() {
		return p4;
	}
	double getp5() {
		return p5;
	}
	double getp6() {
		return p6;
	}
	double getp7() {
		return p7;
	}
	double getp8() {
		return p8;
	}
	string getstr1() {
		return str1;
	}
	string getstr2() {
		return str2;
	}
	string getstr3() {
		return str3;
	}
	string getstr4() {
		return str4;
	}
	string getstr5() {
		return str5;
	}
	string getstr6() {
		return str6;
	}
	string getstr7() {
		return str7;
	}
	string getstr8() {
		return str8;
	}


	Huffman() {

		ifstream in("Probability.txt"); // окрываем файл для чтения
		string line;
		if (in.is_open()){

			for (int i = 1; i <= 8; i++) {
				if (getline(in, line)) {
					switch (i)
					{
						case 1: p1 = stod(line);
							break;
						case 2: p2 = stod(line);
							break;
						case 3: p3 = stod(line);
							break;
						case 4: p4 = stod(line);
							break;
						case 5: p5 = stod(line);
							break;
						case 6: p6 = stod(line);
							break;
						case 7: p7 = stod(line);
							break;
						case 8: p8 = stod(line);
							break;

					}
				}
			}

		}
		in.close();



	};

};