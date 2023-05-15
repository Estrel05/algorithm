#include <iostream>
using namespace std;

class StaticTest {
    static int count;
    string name;

   public:
    StaticTest(string name) {
        count++;
        this->name = name;
        cout << "객체 생성: " << count << "\t"
             << "이름: " << name << endl;
    }
};

int StaticTest::count = 0;

int main() {
    StaticTest st1("method 01");
    StaticTest st2("method 02");
    StaticTest st3("method 03");
}
/*
static
    특징
    ⓐ 동일한 클래스의 모든 객체들에 의해 공유
    ⓑ 멤버는 클래스 당 하나 생성(멤버는 객체 내부가 아닌 별도 공간에 생성, 클래스 멤버라 부름)
    ⓒ 프로그램과 생명을 같이 함
    ⓓ static 멤버 변수를 정의하면 반드시 객체 외부 공간에서 초기화를 해야 함
    ⓔ static 함수는 지역 변수와 static 변수만 사용할 수 있음(non-static 접근 불가)

non-static
    특징
    ⓐ 멤버는 객체 별로 다른 공간을 유지
    ⓑ 멤버는 객체마다 별도 생성(인스턴스 멤버라 부름)
    ⓒ 객체와 생명을 같이 함
    ⓓ non-static 함수는 지역 변수와 static, non-static 멤버 변수/함수에 모두 접근할 수 있음
*/