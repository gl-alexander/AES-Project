#include <iostream>
#include <fstream>
using namespace std;

const char keyPath[] = "key.txt";
const char messagePath[] = "message.txt";


void getKey() {
    ifstream keyFile;
    keyFile.open(keyPath);
    if (!keyFile.is_open()) {
        cout << "Error while opening " << keyPath;
        return;
    }
    char keyString[16];
    keyFile.getline(keyString, 16);//key should be on the first line
    
    cout << keyString;
}

void getMessage() {
    ifstream msgFile;
    msgFile.open(messagePath);
    if (!msgFile.is_open()) {
        cout << "Error while opening " << keyPath;
        return;
    }
    char messageString[1024];
    msgFile.getline(messageString, 1024);

    cout << messageString;
}

int main()
{
    getMessage();
    getKey();
}
