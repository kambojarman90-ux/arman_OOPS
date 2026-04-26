// 1

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("NUM.TXT");
    for (int i = 1; i <= 200; i++)
        fout << i << "\n";
    fout.close();
    cout << "Numbers written successfully.\n";
}

// 2

#include <iostream>
#include <fstream>
using namespace std;

void countAlphabets() {
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;
    while (fin.get(ch))
        if (isalpha(ch))
            count++;
    fin.close();
    cout << "Number of alphabets: " << count << endl;
}

int main() {
    countAlphabets();
}

// 3
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int id;
    char name[50];
    float marks;
};

int main() {
    Student s1 = {1, "Alice", 92.5};

    // Write object
    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    // Read object
    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << "ID: " << s2.id << ", Name: " << s2.name << ", Marks: " << s2.marks << endl;
}

// 4
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("source.txt");
    ofstream fout("destination.txt");
    char ch;
    while (fin.get(ch))
        fout.put(ch);
    fin.close();
    fout.close();
    cout << "File copied successfully.\n";
}
// 5

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Length: " << str.length() << endl;

    ofstream fout("string.txt");
    fout << str;
    fout.close();

    ifstream fin("string.txt");
    string fetched;
    getline(fin, fetched);
    fin.close();

    cout << "Fetched from file: " << fetched << endl;
}

// 6(a)

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("az.txt");
    for (char c = 'A'; c <= 'Z'; c++)
        fout << c;
    fout.close();

    ifstream fin("az.txt");
    fin.seekg(9);           // 0-indexed, so 9 = 10th character
    char ch;
    fin.get(ch);
    cout << "10th character: " << ch << endl;   // Output: J
    fin.close();
}
// (b)
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create file with 1–9
    fstream file("nums.txt", ios::out);
    for (int i = 1; i <= 9; i++)
        file << i;
    file.close();

    // Overwrite 5th character (index 4)
    file.open("nums.txt", ios::in | ios::out);
    file.seekp(4);
    file.put('X');
    file.close();

    ifstream fin("nums.txt");
    string content;
    getline(fin, content);
    cout << "After overwrite: " << content << endl;
}
// (c)
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("az.txt");
    fin.seekg(0, ios::end);
    long size = fin.tellg();
    cout << "File size: " << size << " bytes\n";
    fin.close();
}
// (d)
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("az.txt");
    fin.seekg(-1, ios::end);
    char ch;
    fin.get(ch);
    cout << "Last character: " << ch << endl;   // Output: Z
    fin.close();
}


// (e)
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create data.txt with multiple lines
    ofstream fout("data.txt");
    fout << "Hello World\nThis is C++ File Management\nLine Three\n";
    fout.close();

    ifstream fin("data.txt");
    fin.seekg(10);                        // Move to 10th byte
    cout << "Position after seekg(10): " << fin.tellg() << endl;

    string remaining, line;
    while (getline(fin, line))
        remaining += line + "\n";

    cout << "Remaining content:\n" << remaining;
    fin.close();
}

// (f)

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("hello.txt", ios::out);
    string text = "HelloWorld";
    for (char c : text) {
        file.put(c);
        cout << "After writing '" << c << "', put pointer at: " << file.tellp() << endl;
    }
    file.close();

    // Replace "World" (starts at index 5) with "C++  " (padded to same length)
    file.open("hello.txt", ios::in | ios::out);
    file.seekp(5);
    file.write("C++  ", 5);   // pad with spaces to match "World" length
    file.close();

    ifstream fin("hello.txt");
    string result;
    getline(fin, result);
    cout << "File content: " << result << endl;
    fin.close();
}