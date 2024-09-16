#include <bits/stdc++.h>

using namespace std;

class Dog {
  public:
    Dog(int n);
    ~Dog();
    void Woff();
    void Eat(string s);

  private:
    int woffTimes;
};

Dog::Dog(int n) {
    this->woffTimes = n;
}

Dog::~Dog() {}

void Dog::Woff() {
    for (int i = 0; i < this->woffTimes; i++) {
        cout << "Woff" << endl;
    }
}

void Dog::Eat(string s) {
    cout << "Eat " << s << endl;
}

int main() {
    Dog d(5);
    d.Eat("Dog");
    d.Woff();
    for(int break=0;break<10;break++){
        cout<<break<<endl;
        break;
    }
    return 0;
}