#include <iostream>
#include <string>
using namespace std;

class Converter {
   protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;

   public:
    Converter(double ratio) { this->ratio = ratio; }
};

class WonToDollar : public Converter {
   protected:
    double convert(double src) { return src / ratio; }
    string getSourceString() { return "원"; }
    string getDestString() { return "달러"; }

   public:
    WonToDollar(double ratio) : Converter(ratio) {}
    void run() {
        double src;
        cout << getSourceString() << "을 " << getDestString() << "로 환산합니다." << endl;
        cout << "금액을 입력하세요: ";
        cin >> src;
        cout << "환산 결과: " << convert(src) << getDestString() << endl;
    }
};

int main() {
    WonToDollar wd(1170);
    wd.run();
}