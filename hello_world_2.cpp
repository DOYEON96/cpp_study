#include <iostream> 
#include <string> 

// using std library list
using std::cin;
using std::endl; 
using std::cout; 
using std::string; 

int main()
{
    // 시작 출력 
    cout << "Please enter your first name : "; 

    // name:string 변수 선언 및 name 입력받기 
    string name; 
    cin >> name;

    // name 변수와 함께 출력할 출력문 작성
    const string greeting = "Hello, " + name + "!";
    
    // padding 변수선언 
    const int pad = 1; 

    // row 비트 
    const int rows = pad * 2 + 3; 
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // 줄바꿈 
    cout << endl; 

    for (int r = 0; r != rows; ++r) { 

        string::size_type c = 0;

        while (c != cols) {
            
            if (r == pad + 1 && c == pad + 1 ) {
                cout << greeting;
                c += greeting.size();
            } else {
                
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else 
                    cout << " ";
                ++c;
            }
        }

        cout << endl;
    }

    return EXIT_SUCCESS;
}